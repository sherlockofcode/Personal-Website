#include<stdio.h>
int main()
{
	int T,N;
	scanf("%d",&T);
	while(T--)
	{
		int out=0;
		scanf("%d",&N);
		out+=N/100;
		N%=100;
		out+=N/50;
		N%=50;
		out+=N/10;
		N%=10;
		out+=N/5;
		N%=5;
		out+=N/2;
		N%=2;
		out+=N;
		printf("%d\n",out);

	}
	return 0;
}
