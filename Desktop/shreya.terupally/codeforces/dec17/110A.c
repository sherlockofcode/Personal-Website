#include<stdio.h>
int function(int n);
int arr[1000];
int l;
int main()
{
	int i,len,flag=0;
	l=0;
	unsigned long long int n;
	scanf("%llu",&n);
	function(3);
	for(i=0;arr[i]!=0;i++);
	//	printf("%d\n",arr[i]);
	len=i;
	int ndigits=0;
	while(n)
	{
		if(n%10==4|| n%10==7)
			ndigits++;
		n/=10;
	}
	for(i=len-1;i>=0;i--)
	{
		if(ndigits==arr[i])
		{
			flag=1;
			break;
		}
	}
	if(flag)
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
