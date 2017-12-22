#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int max=0,size=1;
	for(i=1;i<n;i++)
	{
		if(arr[i]>=arr[i-1])
		{
			size++;
		}
		else
		{
			if(size>max)
				max=size;
			size=1;
		}
	}
	if(size>max)
		max=size;
	printf("%d\n",max);

	return 0;
}
