#include<stdio.h>
int main()
{
	long long int n,out=0;
	scanf("%lld",&n);
	if(n&1)
	{
		out-=(n/2+1)*(n/2+1);
	}
	else
		out-=(n/2)*(n/2);
	out+=(n/2)*(n/2+1);
	printf("%lld\n",out);
	return 0;
}
