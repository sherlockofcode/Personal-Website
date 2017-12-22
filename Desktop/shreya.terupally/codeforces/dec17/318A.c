#include<stdio.h>
int main()
{
	long long int n,k;
	scanf("%lld %lld",&n,&k);
	if(n&1)
	{
		if(k<=(n+1)/2)
			printf("%lld\n",2*k-1);
		else
		{
			k-=(n+1)/2;
			printf("%lld\n",2*k);
		}
	}
	else
	{
		if(k<=n/2)
			printf("%lld\n",2*k-1);
		else
		{
			k-=n/2;
			printf("%lld\n",2*k);
		}
	}
	return 0;
}
