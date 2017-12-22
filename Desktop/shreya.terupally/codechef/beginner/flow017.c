#include<stdio.h>
int main()
{
	int T,i;
	int arr[3];
	scanf("%d",&T);
	while(T--)
	{
		int maxi=0;
		for(i=0;i<3;i++)
		{
			scanf("%d",&arr[i]);
			if(arr[i]>arr[maxi])
				maxi=i;
		}
		arr[maxi]=0;
		maxi=0;
		for(i=0;i<3;i++)
		{
			if(arr[i]>arr[maxi])
				maxi=i;
		}
		printf("%d\n",arr[maxi]);
	}
	return 0;
}
