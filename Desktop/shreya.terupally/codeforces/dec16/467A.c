#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a,b,out=0;
	while(n--)
	{
		scanf("%d %d",&a,&b);
		if(b-a>1)
			out++;
	}
	printf("%d\n",out);
	return 0;
}

