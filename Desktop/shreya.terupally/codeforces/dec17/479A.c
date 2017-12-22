#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int max=0,sum;
	sum=(a+b)+c;
	if(sum>max)	max=sum;
	sum=(a+b)*c;
	if(sum>max)	max=sum;
	sum=(a*b)+c;
	if(sum>max)	max=sum;
	sum=(a*b)*c;
	if(sum>max)	max=sum;
	sum=a+(b*c);
	if(sum>max)	max=sum;
	sum=a*(b+c);
	if(sum>max)	max=sum;
	
	printf("%d\n",max);
	return 0;
}
