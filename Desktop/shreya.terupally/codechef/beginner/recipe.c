#include<stdio.h>
int main()
{
	int T,N,i,j;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		int arr[N],min=1000;
		for(i=0;i<N;i++)
		{
			scanf("%d",&arr[i]);
			if(arr[i]<min)
				min=arr[i];
		}
		int flag=1;
		for(i=min;i>0;i--)
		{
			flag=1;
			for(j=0;j<N;j++)
			{
				if(arr[j]%i!=0)
				{
					flag=0;
					break;
				}
			}

			if(flag==1)
				break;

		}
		
		for(j=0;j<N;j++)
			printf("%d ",arr[j]/i);
		printf("\n");

		
	}
	return 0;
}
