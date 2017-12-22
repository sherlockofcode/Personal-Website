#include<stdio.h>
int main()
{
	char str[200],t[200];
	scanf("%s %s",str,t);
	int i,len,flag=1;
	for(len=0;str[len]!='\0';len++);
	
	for(i=0;i<len;i++)
	{
		if(str[len-i-1]!=t[i])
		{
			flag=0;
			break;
		}
	}
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
