#include<stdio.h>
int main()
{
	char str[200];
	scanf("%s",str);
	int i,flag=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
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
