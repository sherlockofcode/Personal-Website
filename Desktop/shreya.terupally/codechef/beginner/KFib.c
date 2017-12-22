#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int arr[n+1];
	int cum[n+1];
	int i;
	arr[0]=1;
	cum[0]=1;
	int x=1000000007;
	for(i=1;i<=k;i++)
	{	
		arr[i]=1;
		cum[i]=(arr[i]%x+cum[i-1]%x)%x;
	}
	for(i=k+1;i<=n;i++)
	{
		arr[i]=(cum[i-1]%x-cum[i-k-1]%x)%x;
		cum[i]=(arr[i]%x+cum[i-1]%x)%x;
	}

	printf("%d\n",arr[n]%x);
	
	return 0;	
}
	
