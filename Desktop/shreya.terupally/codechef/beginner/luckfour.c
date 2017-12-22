#include<stdio.h>
int main()
{
	int T,N;
	scanf("%d",&T);
	while(T--)
	{
		int out=0;
		scanf("%d",&N);
		while(N)
		{
			if(N%10==4)
				out++;
			N=N/10;
		}
		printf("%d\n",out);
	}
	return 0;
}
