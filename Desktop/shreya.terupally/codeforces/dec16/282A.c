#include<stdio.h>
int main()
{
	int n;
	char str[3];
	scanf("%d",&n);
	int out=0;
	while(n--)
	{
		scanf("%s",str);
		if(str[1]=='+')
			out++;
		else
			out--;
	}
	printf("%d\n",out);
	return 0;
}
