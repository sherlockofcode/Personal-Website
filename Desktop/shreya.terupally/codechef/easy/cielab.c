#include<stdio.h>
int main()
{
	int A,B,out;
	scanf("%d %d",&A,&B);
	if((A-B)%10!=7)
		out=((A-B)/10)*10+7;
	else
		out=A-B-5;

	printf("%d\n",out);
	return 0;
}
