#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[m],i,j,temp;
	for(i=0;i<m;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<m;i++)
	{
		for(j=i;j<m;j++)
		{
			if(arr[j]>arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int min=1000;
	for(i=0;i<=m-n;i++)
	{
		if(arr[i]-arr[i+n-1]<min)
			min=-arr[i+n-1]+arr[i];
	}
	printf("%d\n",min);
	return 0;
}
