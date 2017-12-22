#include<stdio.h>
int main()
{
	int n,m,out;
	scanf("%d %d",&n,&m);

	int i;
	for(i=1;n;i++)
	{
		n--;
		if(i%m==0)
			n++;
	}
	printf("%d\n",i-1);

	return 0;
}
