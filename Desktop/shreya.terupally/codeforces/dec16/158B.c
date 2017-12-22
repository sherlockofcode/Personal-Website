#include<stdio.h>
int main()
{
	int i,n,j,temp;
	scanf("%d",&n);
	int arr[n];
	int count[5]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		count[arr[i]]++;
	}
	int out=count[4];
	int min=count[3];
	if(count[1]<=min)
		min=count[1];
	count[3]-=min;
	out+=min+count[3];
	count[1]-=min;
	out+=(count[2]/2);
	if(count[2]%2)
	{
		out++;
		count[1]-=2;
	}
	if(count[1]>0&&count[1]%4)
		out+=count[1]/4+1;
	else
		out+=count[1]/4;
	
	printf("%d\n",out);
	return 0;
}
