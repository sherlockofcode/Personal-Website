#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i,out=0,count[2]={0},in[2];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		count[arr[i]&1]++;
		if(count[arr[i]&1]==1)
			in[out++]=i;
	}
	for(i=0;i<2;i++)
		if(count[arr[in[i]]&1]==1)
			printf("%d\n",in[i]+1);

	return 0;
}
