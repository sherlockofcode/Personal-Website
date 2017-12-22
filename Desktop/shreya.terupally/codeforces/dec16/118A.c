#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[200];
	scanf("%s",str);
	int i,len,l=0;
	char str2[200];
	for(len=0;str[len]!='\0';len++);
	for(i=0;i<len;i++)
	{
		if(str[i]<91)
			str[i]+=32;
		if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y')
		{
			str2[l++]='.';
			str2[l++]=str[i];
		}

	}
	for(i=0;i<l;i++)
		printf("%c",str2[i]);
	printf("\n");

	return 0;
}
