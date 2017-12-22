#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int count[n+1];
	for(i=0;i<n+1;i++)
		count[i]=0;
	int a,b;
	scanf("%d",&a);
	int arrp[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arrp[i]);
		count[arrp[i]]++;
	}
	scanf("%d",&b);
	int arrq[b];
	for(i=0;i<b;i++)
	{
		scanf("%d",&arrq[i]);
		count[arrq[i]]++;
	}
	
	int flag=1;
	for(i=1;i<=n;i++)
	{
		if(count[i]==0)
		{
			flag=0;
			break;
		}
	}
	if(flag)
		printf("I become the guy.\n");
	else
		printf("Oh, my keyboard!\n");
	return 0;
}
