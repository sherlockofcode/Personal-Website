#include<stdio.h>
int main()
{
	int k,n,w;
	scanf("%d %d %d",&k,&n,&w);
	int out=k*(w*(w+1))/2-n;
	if(out<0)
		printf("0\n");
	else
		printf("%d\n",out);
	return 0;
}
