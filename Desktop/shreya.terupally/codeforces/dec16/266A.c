#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char str[n+1];
	scanf("%s",str);
	int i,out=1;
	for(i=0;i<n-1;i++)
	{
		if(str[i+1]!=str[i])
			out++;
	}
	printf("%d\n",n-out);
	return 0;
}
