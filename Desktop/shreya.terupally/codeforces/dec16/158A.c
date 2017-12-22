#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int arr[n+1],i,out=k;
	arr[n]=0;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	if(arr[k]>0)
		for(;arr[out]==arr[k-1];out++);
	else 
		for(;out-1>=0&&arr[out-1]<=0;out--);
	printf("%d\n",out);

	return 0;
}	
