#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int least=a;
	if(least>b)
		least=b;
	if(least&1)
		printf("Akshat\n");
	else
		printf("Malvika\n");

	return 0;
}
