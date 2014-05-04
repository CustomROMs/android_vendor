/*****************************************************************************/
/*
 * Copyright (C) ST-Ericsson SA 2009,2010. All rights reserved.
 * This code is ST-Ericsson proprietary and confidential.
 * Any use of the code for whatever purpose is subject to
 * specific written permission of ST-Ericsson SA.
 *
 */

/**
 * \file   filter.c
 * \brief  
 * \author ST-Ericsson
 */
/*****************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAXCOEFS 2000
int main(int argc, char *argv[] )
{
	FILE *fin,*fout,*fnum,*fden;
	double Dn[MAXCOEFS],Dd[MAXCOEFS],num[MAXCOEFS],den[MAXCOEFS];
	double xmult,node,out;
	float xtemp;
	int skip=0,bigend=1,nbytes=2,ibuf,itemp,i,coefnum,datanum,datavalid,iir=0,numcells=0,M=1,L=1,state;
	int readdelay,writedelay;
	unsigned char cbuf;
	xmult=pow(2.,31.)-1.0;
	if ((argc!=5)&&(argc!=9))
	{
		printf("\n\n********* PARAMETER ERROR *********");
		printf("\n\n filter INFILE  OUTFILE [ENDIENESS NBYTES M L] NUMFILE DENFILE\n");
		printf(" INFILE OUTFILE are binary files containing audio samples\n");
		printf(" [ENDIENESS b(def) or l  NBYTES 1,2(def),3,4 M(def 1) L(def 1)]\n"); 
		printf(" NUMFILE DENFILE txt files contain floating point filter coefficients\n");
		printf(" coefficents are generated by Matlab program calcfilt.m\n");
		printf(" fir coefs num=b with den=1\n");
		printf(" iir coefs num,den are the biquad coefs generated from roots of b and a\n");
		exit(1);
	}
	//------------------------ Open binary input and output audio files -----------
	if ((fin=fopen(argv[1],"rb"))==0)
	{
		printf("\n\n********** BAD INPUT FILE NAME  **********\n\n");
		exit(1);
	}
	fout=fopen(argv[2],"wb");
	if (argc==9)
	{
		skip=4;
		if (argv[3][0]=='l') bigend=0;
		nbytes=atoi(argv[4]);
		M=atoi(argv[5]);
		L=atoi(argv[6]);
	}
	//--------- Open txt filter numerator and denominator coefficient files ------- 
	if ((fnum=fopen(argv[3+skip],"rt"))==0)
	{
		printf("\n\n********** BAD NUMFILE NAME  **********\n\n");
		exit(1);
	}
	if ((fden=fopen(argv[4+skip],"rt"))==0)
	{
		printf("\n\n********** BAD DENFILE NAME  **********\n\n");
		exit(1);
	}
	//--------- Clear delay line and all coefficients -----------------------
	for (i=0;i<MAXCOEFS;i++)
	{
		Dd[i]=0.0;
		Dn[i]=0.0;
		num[i]=0.0;
		den[i]=0.0;
	}
	//---------- Read filter numerator coefficients ----------------------
	datavalid=1;
	i=0;
	while (datavalid==1)
	{
		datavalid=fscanf(fnum,"%e16.10\n",&xtemp);
		if (datavalid!=1) break;
		num[i]=xtemp;
		i++;
	}
	numcells=i;
	//---------- Read filter denominator coefficients ---------------------
	datavalid=1;
	i=0;
	while (datavalid==1)
	{
		datavalid=fscanf(fden,"%e16.10\n",&xtemp);
		if (datavalid!=1) break;
		den[i]=-xtemp;
		i++;
	}
	if (i>1)
	{
		numcells=i/3;
		iir=1;
	}
	else
	{
		if ((numcells%M)!=0)
			numcells=(numcells/M)+1;
		else
			numcells=numcells/M;
	}
	datavalid=1;
	state=M;
	readdelay=0;
	writedelay=0;
	//--------------- Filter all the samples ----------------------------
	while (datavalid==1)
	{
		if (iir==1)
		{
			xtemp=0.0;
			if (readdelay==0)
			{
				//-------- Read 1 sample ----------------
				itemp=0;
				for (i=0;i<nbytes;i++)
				{
					cbuf=fgetc(fin);
					if (bigend==0)
					{
						itemp+=cbuf<<((i+4-nbytes)*8);
					}
					else
					{
						itemp+=cbuf<<((3-i)*8);
					}
				}
				readdelay=M;
				ibuf=(int)itemp;
				if (feof(fin)) datavalid=0;
				xtemp=(float)ibuf/xmult;
				if (datavalid!=1) break;
			}
			//---------------------------------------
			node=xtemp;
			coefnum=0;
			datanum=0;
			for (i=0;i<numcells;i++)
			{
				out=node*num[coefnum];
				out+=Dn[datanum]*num[coefnum+1];
				out+=Dn[datanum+1]*num[coefnum+2];
				out+=Dd[datanum]*den[coefnum+1];
				out+=Dd[datanum+1]*den[coefnum+2];
				Dn[datanum+1]=Dn[datanum];
				Dn[datanum]=node;
				Dd[datanum+1]=Dd[datanum];
				Dd[datanum]=out;
				datanum+=2;
				coefnum+=3;
				node=out;
			}
			xtemp=M*out;
			if (writedelay==0)
			{
				//--------- Write 1 sample -------------
				ibuf=(int)(xtemp*xmult);
				for (i=0;i<nbytes;i++)
				{
					if (bigend==0)
					{
						cbuf=ibuf>>((i+4-nbytes)*8);
					}
					else
					{
						cbuf=ibuf>>((3-i)*8);
					}
					fputc(cbuf,fout);
				}
				writedelay=L;
			}
			readdelay--;
			writedelay--;
		}
		else //if (iir==1)
		{
			if (state>=M)
			{
				//-------- Read 1 sample ----------------
				itemp=0;
				for (i=0;i<nbytes;i++)
				{
					cbuf=fgetc(fin);
					if (bigend==0)
					{
						itemp+=cbuf<<((i+4-nbytes)*8);
					}
					else
					{
						itemp+=cbuf<<((3-i)*8);
					}
				}
				ibuf=(int)itemp;
				if (feof(fin)) datavalid=0;
				xtemp=(float)ibuf/xmult;
				if (datavalid!=1) break;
				for (i=numcells-1;i>=1;i--)
					Dn[i]=Dn[i-1];
				Dn[0]=xtemp;
				state-=M;
			}
			else //if state<M
			{
				node=0;
				for (i=0;i<numcells;i++)
				{
					node+=Dn[i]*M*num[state+M*i];
				}
				xtemp=node;
				//--------- Write 1 sample -------------
				//			ibuf=((int)(2.*xtemp*xmult)+1)>>1;
				ibuf=(int)(xtemp*xmult);
				for (i=0;i<nbytes;i++)
				{
					if (bigend==0)
					{
						cbuf=ibuf>>((i+4-nbytes)*8);
					}
					else
					{
						cbuf=ibuf>>((3-i)*8);
					}
					fputc(cbuf,fout);
				}
				state+=L;
			}//if state<M
		} //if (iir==1)
	}
	fclose(fin);
	fclose(fout);
	fclose(fnum);
	fclose(fden);
	return 0;
}

