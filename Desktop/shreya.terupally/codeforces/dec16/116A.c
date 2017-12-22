#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int npass[n+1];
	npass[0]=0;
	int exit,enter,max=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&exit,&enter);
		npass[i]=npass[i-1]-exit+enter;
		if(npass[i]>max)
			max=npass[i];
	}
	printf("%d\n",max);
	return 0;
}
