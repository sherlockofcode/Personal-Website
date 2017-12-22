#include<stdio.h>
int main()
{
	int T,N;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		int out=N%10;
		while(N/=10)
			out=out*10+N%10;
		printf("%d\n",out);
	}
	return 0;
}
