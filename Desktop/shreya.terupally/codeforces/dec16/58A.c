#include<stdio.h>
int main()
{
	char str[200];
	scanf("%s",str);
	int i,len;
	int state=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(state==0&&str[i]=='h')
			state++;
		else if(state==1&&str[i]=='e')
			state++;
		else if(state==2&&str[i]=='l')
			state++;
		else if(state==3&&str[i]=='l')
			state++;
		else if(state==4&&str[i]=='o')
			state++;
	}
	if(state==5)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
