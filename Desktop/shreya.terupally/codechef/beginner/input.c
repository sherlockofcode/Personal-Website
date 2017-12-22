#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int out=0,i;
	while(n--)
	{
		scanf("%d",&i);
		if(i%k==0)
			out++;
	}
	printf("%d\n",out);
	return 0;
}
