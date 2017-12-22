#include<stdio.h>
int main()
{
	int i,n,t,flag=0;
	scanf("%d %d",&n,&t);
	int arr[n-1];
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&arr[i]);
		
	}

	i=0;
	while((i+1)<t)
	{
		i+=arr[i];
		if((i+1)==t)
			flag=1;
	}
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
