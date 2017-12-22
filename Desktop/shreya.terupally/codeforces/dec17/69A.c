#include<stdio.h>
int main()
{
	int n,i,flag=0,j;
	scanf("%d",&n);
	int arr[101][3]={0};
	for(i=0;i<n;i++)
		scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
	for(j=0;j<3;j++)
	{
		for(i=0;i<n;i++)
			arr[n][j]+=arr[i][j];
		if(arr[n][j]!=0)
		{
			flag=1;
			break;
		}
	}
	if(flag)
		printf("NO\n");
	else
		printf("YES\n");
		
	
	return 0;
}
