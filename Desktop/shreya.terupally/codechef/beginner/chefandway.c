#include<stdio.h>
int main()
{
	int N,K;
	scanf("%d %d",&N,&K);
	int arr[100000];
	int i;

	int min=1;
	for(i=1;i<=N;i++)
	{
		scanf("%d",&arr[i]);
		min*=arr[i];
	}
	int prod=arr[1];
	x=1;
	int ind;
	

	printf("%d\n",prod);


	return 0;
}
