#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int flag=1,i;
	for(i=1;flag==1;i++)
	{
		flag=0;
		int count[10]={0};
		int x=n+i;
		while(x)
		{
			count[x%10]++;
			if(count[x%10]>1)
				flag=1;
			x/=10;	
		}

	}
	printf("%d\n",n+i-1);
	return 0;
}
