#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n+1];
	int arr2[n+1];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		arr2[arr[i]]=i;
	}

	for(i=1;i<=n;i++)
		printf("%d ",arr2[i]);
	printf("\n");

	return 0;
}
