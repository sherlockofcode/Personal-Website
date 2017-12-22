#include<stdio.h>
int main()
{
int T;
scanf("%d",&T);
int N;
while(T--)
{
int out=0;
scanf("%d",&N);
while(N>2048)
{
N-=2048;
out++;
}

out+=N&1;
while(N/=2)
out+=N&1;	
printf("%d\n",out);
	
}
return 0;
}
