#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N;
		scanf("%d",&N);

		int max=1,i;
		for(i=1;i<=N;i++)
		{
			if(N%i>=N%max)
				max=i;
		}
		printf("pakka-%d ",max);
		printf("doubt-%d \n",N/2+1);
	}
	return 0;
}
