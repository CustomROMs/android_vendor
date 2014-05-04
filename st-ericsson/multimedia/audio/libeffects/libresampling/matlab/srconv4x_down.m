close all;
srconv4d
fc=1000;
fs=32000;
T=1/fs;
checkdisto=0;
if (checkdisto==0)
	N = 2048;
else
	N = 32000;
end

NRES = N/4;
		
for i=1:N
	input(i) = 0;
end

PI = atan(1) * 4;
rand('seed',0);

if (checkdisto==0)
	for i=1:N
		input(i) = (rand(1) - 0.5);
	end
else
        for i=1:N
                input(i) = sin(2*pi*fc*T*(i-1))/2;
        end

end

res = upfirdn(input,deci1_4x,1,4);		
res = res * 2^(shift_4x);
res = res * mult_4x;
figure;
epsilon=1e-10;
fftsiz=256;
i=1:fftsiz;
freq=(i-1)*fs/(4*fftsiz);
spect=(4/fftsiz)*fft(res(NRES-fftsiz+1:NRES).*chebwin(fftsiz,160)',fftsiz);
spectdb=20*log10(abs(spect)+epsilon);
plot(freq,spectdb);
grid on;
zoom on;
axis([0 fs/(4*2) -180 0]);
title('Spectrum of output signal');
if (checkdisto>0)
        fil1=fopen('simout.txt','wt');
        fprintf(fil1,'%f\n',res);
        fclose('all');
end


%Write the corresponding test file
fid = fopen('testval_hamacadown_4xa.c','w');
	


fprintf(fid, '#ifndef __flexcc2__\n');

%----------
fprintf(fid, '#define N_IN   %d \n ',N);
fprintf(fid, '#define N_OUT  %d \n ',NRES);
fprintf(fid,'Float indown_4x[%d] = {\n',N);
for k = 1:N-1
     fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL),  \t\t// %d\n',input(k),k-1);
end
k = N;
fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL) }; \t\t// %d\n',input(k),k-1);
		
fprintf(fid,'const YMEM Float outdown_4x[%d] = {\n',NRES);
for k = 1:NRES-1
     fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL),  \t\t// %d\n',res(k),k-1);
end
k = NRES;
fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL) }; \t\t// %d\n',res(k),k-1);
%--------
N=floor(4*N/16);
NRES=floor(4*NRES/16);
fprintf(fid, '#else\n');
%----------
fprintf(fid, '#define N_IN   %d \n ',N);
fprintf(fid, '#define N_OUT  %d \n ',NRES);
fprintf(fid,'Float indown_4x[%d] = {\n',N);
for k = 1:N-1
     fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL),  \t\t// %d\n',input(k),k-1);
end
k = N;
fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL) }; \t\t// %d\n',input(k),k-1);
		
fprintf(fid,'const YMEM Float outdown_4x[%d] = {\n',NRES);
for k = 1:NRES-1
     fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL),  \t\t// %d\n',res(k),k-1);
end
k = NRES;
fprintf(fid,'\tFORMAT_FLOAT(%.15f,MAXVAL) }; \t\t// %d\n',res(k),k-1);
%--------

fprintf(fid, '#endif\n');
fclose('all');

