#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int arr[n][2];
	for(i=0;i<n;i++)
		scanf("%d %d",&arr[i][0],&arr[i][1]);
	int out=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(arr[i][0]==arr[j][1])
					out++;
			}
		}
	}
	printf("%d\n",out);
	return 0;
}
