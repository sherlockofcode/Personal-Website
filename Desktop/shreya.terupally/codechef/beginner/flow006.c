#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	int N;
	while(T--)
	{
		scanf("%d",&N);
		int sum=N%10;
		while(N/=10)
			sum+=N%10;
		printf("%d\n",sum);
		
	}
	return 0;
}
