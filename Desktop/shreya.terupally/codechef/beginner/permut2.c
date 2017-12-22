#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N,i;
	scanf("%d",&N);
	while(N!=0)
	{
		int arr[N+1],arr2[N+1];
		for(i=1;i<=N;i++)
		{
			scanf("%d",&arr[i]);
			arr2[arr[i]]=i;
		}
	
		char* str="ambiguous";
		for(i=1;i<=N;i++)
		{
			if(arr[i]!=arr2[i])
			{
				str="not ambiguous";
				break;
			}
		}

		printf("%s\n",str);


		scanf("%d",&N);
	}
	return 0;
}
