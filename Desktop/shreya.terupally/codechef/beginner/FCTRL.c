#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while (T--)
	{
		int a;
		scanf("%d",&a);
		int out=0;
		while(a)
			out+=a/=5;
		printf("%d\n",out);
	}
	return 0;
}
