#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	char str[n][2];
	for(i=0;i<n;i++)
		scanf("%s",str[i]);
	int group=1;
	for(i=1;i<n;i++)
	{
		if(str[i][0]==str[i-1][1])
			group++;
	}
	printf("%d\n",group);
	return 0;
}
