#include<stdio.h>
int main()
{
	int n,mini,maxi=0;
	scanf("%d",&n);
	int i,arr[n];
	mini=n-1;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[i]>arr[maxi])
			maxi=i;
		if(arr[i]<=arr[mini])
			mini=i;
	}
	int out=maxi+n-1-mini;
	if(mini<maxi)
		out--;
	printf("%d\n",out);


	return 0;
}
