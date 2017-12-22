#include<stdio.h>
int main()
{
	char str[1001];
	int flag=1,i=0;
	while(flag)
	{
		scanf("%c",&str[i]);
		if(str[i++]=='}')
			flag=0;
	}
	str[i]='\0';
	int count[150]={0},dist=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97&&str[i]<123)
		{
			if(count[str[i]]==0)
				dist++;
			count[str[i]]++;
		}
	}
	printf("%d\n",dist);
	return 0;
}
