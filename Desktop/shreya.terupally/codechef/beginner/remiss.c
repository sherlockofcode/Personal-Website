#include<stdio.h>
int main()
{
	int T;
	long long A,B;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld %lld",&A,&B);
		long long max=A;
		if(A<B)
			max=B;
		printf("%lld %lld\n",max,A+B);
	}
	return 0;
}
