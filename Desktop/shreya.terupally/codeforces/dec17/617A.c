#include<stdio.h>
int main()
{
	int i,x,out=0;
	scanf("%d",&x);
	for(i=5;i>=1;i--)
	{
		out+=x/i;
		x=x%i;
	}
	printf("%d\n",out);
	return 0;
}
