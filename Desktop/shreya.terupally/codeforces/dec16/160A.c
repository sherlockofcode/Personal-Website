#include<stdio.h>
int main()
{
	int n,i,j,temp;
	scanf("%d",&n);
	int arr[n];
	int sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int sum1=0;
	for(i=0;i<n;i++)
	{
		sum1+=arr[i];
		if(sum1>sum-sum1)
			break;
	}
	printf("%d\n",i+1);
	
	return 0;
}
