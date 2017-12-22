#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		int arr[201]={0};
		arr[200]=1;
		int ndigits=1;
		int x=200;
		int carry=0;
		int prod=0;
		int y=0;
		for(i=2;i<=n;i++)
		{
			y=0;	
			x=200;
			while(y++<=ndigits)
			{
				prod=(arr[x]*i)+carry;
				carry=prod/10;
				arr[x--]=prod%10;
			}

			while(carry)
			{
				arr[x--]=carry%10;
				carry/=10;
				ndigits++;
			}

			
		}
		for(i=0;arr[i]==0;i++);
		while(i<201)
			printf("%d",arr[i++]);
		printf("\n");

	}
	return 0;
}
