#include<stdio.h>
int main()
{
	int x;
	float y;
	scanf("%d %f",&x,&y);
	if(x%5!=0||x+0.50>y)
		printf("%.2f\n",y);
	else
		printf("%.2f\n",(float)-x+y-0.50);
	return 0;
}
