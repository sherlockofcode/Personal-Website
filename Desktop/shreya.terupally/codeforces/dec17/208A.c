#include<stdio.h>
int main()
{
	char str[300],str2[300];
	scanf("%s",str);
	int i,len;
	for(i=0;str[i]!='\0';i++);
	len=i;
	int state=0,l=0;
	for(i=0;i<len;i++)
	{
		if(str[i]=='W')
			state=1;
		else if(state==1&&str[i]=='U')
			state++;
		else if(state==2&&str[i]=='B')
			state++;
		else
			state=0;
		str2[l++]=str[i];
		if(state==3)
		{
			l-=3;
			if(l>0&&str2[l-1]!=' ')
			str2[l++]=' ';
		}
	}
	str2[l]='\0';
	for(i=0;str2[i]==' ';i++);
	int strt=i;
	for(i=l-1;str2[i]==' ';i--);
	int end=i;
	for(i=strt;i<=end;i++)
		printf("%c",str2[i]);
	printf("\n");
	
	return 0;
}
