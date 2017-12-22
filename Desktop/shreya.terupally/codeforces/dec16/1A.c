#include<stdio.h>
int main()
{
	long long n,m,a,x,y;
	scanf("%lld %lld %lld",&n,&m,&a);
	if((n/a)*a==n)
		x=n/a;
	else
		x=n/a+1;
	if((m/a)*a==m)
		y=m/a;
	else
		y=m/a+1;
	unsigned long long out=x*y;
	printf("%llu\n",out);

	return 0;
}
