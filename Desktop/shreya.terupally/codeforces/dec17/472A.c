#include<stdio.h>
int sieve[1000010];
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=2;i<=1000000;i++)
		sieve[i]=1;
	for(i=2;i<=1000000;i++)
	{
		if(sieve[i])
		{
			for(j=2*i;j<=1000000;j+=i)
				sieve[j]=0;
		}
	}
	for(i=4;i<=n/2;i++)
		if(sieve[i]==0&&sieve[n-i]==0)
			break;
	printf("%d %d\n",i,n-i);
	return 0;
}
