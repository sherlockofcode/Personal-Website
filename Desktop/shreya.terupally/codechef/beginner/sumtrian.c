#include<stdio.h>
int arr[101][101];
int dynarr[101][101];
int maxlength(int N,int i,int j);
int main()
{
	int i,j;
	int T;
	scanf("%d",&T);
	int N;
	while(T--)
	{
		scanf("%d",&N);
		for(i=0;i<N;i++)
			for(j=0;j<=i;j++)
				dynarr[i][j]=-1;
		
		for(i=0;i<N;i++)
		{	for(j=0;j<=i;j++)
				scanf("%d",&arr[i][j]);
		}
		maxlength(N,0,0);
		printf("%d\n",dynarr[0][0]);
	}
	return 0;
}
int maxlength(int N,int i,int j)
{
	if(dynarr[i][j]>=0)
	{
		return dynarr[i][j];
	}

	int sum=arr[i][j];
	if(i==N-1)
	{
		dynarr[i][j]=sum;
		return sum;
	}
	int sum1=maxlength(N,i+1,j);
	int sum2=maxlength(N,i+1,j+1);
	//printf("sum1-%d %d %d\n",i,j,sum1);
	//printf("sum2-%d %d %d\n",i,j,sum2);
	
	if(sum1>sum2)
		sum+=sum1;
	else
		sum+=sum2;
	dynarr[i][j]=sum;
	//printf("%d %d %d",i,j,sum);
	return sum;
}
