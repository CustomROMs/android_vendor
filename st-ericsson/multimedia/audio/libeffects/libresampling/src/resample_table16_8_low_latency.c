/*****************************************************************************/
/*
 * Copyright (C) ST-Ericsson SA 2009,2010. All rights reserved.
 * This code is ST-Ericsson proprietary and confidential.
 * Any use of the code for whatever purpose is subject to
 * specific written permission of ST-Ericsson SA.
 *
 */

/**
 * ile   resample_table16_8_low_latency.c
 * rief  
 * uthor ST-Ericsson
 */
/*****************************************************************************/
#include "resample_local.h"

#ifndef M4_LL_MSEC
Float const YMEM resample_16_8_low_latency[57] = {
	FORMAT_FLOAT(0.020150080117095,MAXVAL),  		// 0
	FORMAT_FLOAT(0.100826958617909,MAXVAL),  		// 1
	FORMAT_FLOAT(0.250123385816936,MAXVAL),  		// 2
	FORMAT_FLOAT(0.376950865282354,MAXVAL),  		// 3
	FORMAT_FLOAT(0.336149064155368,MAXVAL),  		// 4
	FORMAT_FLOAT(0.101613588348123,MAXVAL),  		// 5
	FORMAT_FLOAT(-0.140929865425584,MAXVAL),  		// 6
	FORMAT_FLOAT(-0.169062249479755,MAXVAL),  		// 7
	FORMAT_FLOAT(0.003307537492306,MAXVAL),  		// 8
	FORMAT_FLOAT(0.131930861207216,MAXVAL),  		// 9
	FORMAT_FLOAT(0.060546393512216,MAXVAL),  		// 10
	FORMAT_FLOAT(-0.080136847495303,MAXVAL),  		// 11
	FORMAT_FLOAT(-0.081681966518347,MAXVAL),  		// 12
	FORMAT_FLOAT(0.036467441275815,MAXVAL),  		// 13
	FORMAT_FLOAT(0.081208491818618,MAXVAL),  		// 14
	FORMAT_FLOAT(-0.004739453711817,MAXVAL),  		// 15
	FORMAT_FLOAT(-0.070809093974732,MAXVAL),  		// 16
	FORMAT_FLOAT(-0.016299728682000,MAXVAL),  		// 17
	FORMAT_FLOAT(0.056679938549907,MAXVAL),  		// 18
	FORMAT_FLOAT(0.028933316372629,MAXVAL),  		// 19
	FORMAT_FLOAT(-0.042049830593463,MAXVAL),  		// 20
	FORMAT_FLOAT(-0.035351565920543,MAXVAL),  		// 21
	FORMAT_FLOAT(0.028510831344089,MAXVAL),  		// 22
	FORMAT_FLOAT(0.037324142820642,MAXVAL),  		// 23
	FORMAT_FLOAT(-0.016809241716962,MAXVAL),  		// 24
	FORMAT_FLOAT(-0.036237111094134,MAXVAL),  		// 25
	FORMAT_FLOAT(0.007227221100918,MAXVAL),  		// 26
	FORMAT_FLOAT(0.033172190291924,MAXVAL),  		// 27
	FORMAT_FLOAT(0.000239022928441,MAXVAL),  		// 28
	FORMAT_FLOAT(-0.028935546638519,MAXVAL),  		// 29
	FORMAT_FLOAT(-0.005731576290291,MAXVAL),  		// 30
	FORMAT_FLOAT(0.024124423786456,MAXVAL),  		// 31
	FORMAT_FLOAT(0.009454682454291,MAXVAL),  		// 32
	FORMAT_FLOAT(-0.019196257416726,MAXVAL),  		// 33
	FORMAT_FLOAT(-0.011662144211585,MAXVAL),  		// 34
	FORMAT_FLOAT(0.014475877119660,MAXVAL),  		// 35
	FORMAT_FLOAT(0.012626034759902,MAXVAL),  		// 36
	FORMAT_FLOAT(-0.010182286565546,MAXVAL),  		// 37
	FORMAT_FLOAT(-0.012599783937539,MAXVAL),  		// 38
	FORMAT_FLOAT(0.006460804184937,MAXVAL),  		// 39
	FORMAT_FLOAT(0.011844220442967,MAXVAL),  		// 40
	FORMAT_FLOAT(-0.003399080278185,MAXVAL),  		// 41
	FORMAT_FLOAT(-0.010592423923393,MAXVAL),  		// 42
	FORMAT_FLOAT(0.001008167052592,MAXVAL),  		// 43
	FORMAT_FLOAT(0.009091619304321,MAXVAL),  		// 44
	FORMAT_FLOAT(0.000729561925627,MAXVAL),  		// 45
	FORMAT_FLOAT(-0.007525965955753,MAXVAL),  		// 46
	FORMAT_FLOAT(-0.001937299590164,MAXVAL),  		// 47
	FORMAT_FLOAT(0.006173299209349,MAXVAL),  		// 48
	FORMAT_FLOAT(0.002776780118569,MAXVAL),  		// 49
	FORMAT_FLOAT(-0.005259434450141,MAXVAL),  		// 50
	FORMAT_FLOAT(-0.004140837029433,MAXVAL),  		// 51
	FORMAT_FLOAT(0.005111836875711,MAXVAL),  		// 52
	FORMAT_FLOAT(0.010330601178071,MAXVAL),  		// 53
	FORMAT_FLOAT(0.007509321099752,MAXVAL),  		// 54
	FORMAT_FLOAT(0.002191030335206,MAXVAL) ,  		// 55
	FORMAT_FLOAT(0.000000000000000,MAXVAL) };  		// 56
#endif //ifndef M4_LL_MSEC
