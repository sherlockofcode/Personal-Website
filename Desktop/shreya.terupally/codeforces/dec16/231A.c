#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a,b,c,i,j,out=0;
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a+b+c>=2)
			out++;
	}
	printf("%d\n",out);
	return 0;
}
