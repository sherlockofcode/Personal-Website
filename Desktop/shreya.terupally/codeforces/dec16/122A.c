#include<stdio.h>
int function(int n);
int arr[1000];
int l;
int main()
{
	int n,i,flag=0;
	l=0;
	scanf("%d",&n);
	function(3);
	for(i=0;arr[i]!=0;i++);
	//	printf("%d\n",arr[i]);
	for(l=i-1;l>=0;l--)
	{
		if(n%arr[l]==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
int function(int n)
{
	if(n==1)
	{
		arr[l++]=4;
		arr[l++]=7;
		return 0;
	}
	int i,x=1;
	for(i=0;i<n-1;i++)
		x*=10;
	int ind=function(n-1);
	for(i=ind;i<ind+(1<<(n-1));i++)
	{
		arr[l++]=4*x+arr[i];
		arr[l++]=7*x+arr[i];
	}
	return i;	
}
