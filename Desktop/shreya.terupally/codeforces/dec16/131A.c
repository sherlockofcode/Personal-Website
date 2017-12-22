#include<stdio.h>
int main()
{
	char str[200];
	int i,len=0;
	scanf("%s",str);
	for(len=0;str[len]!='\0';len++);
	int change=1;
	for(i=1;i<len;i++)
		if(str[i]>=91)
			change=0;

	if(change==1)
	{
		for(i=1;i<len;i++)
			str[i]+=32;
		if(str[0]>=91)
			str[0]-=32;
		else
			str[0]+=32;
	}
	printf("%s\n",str);
	return 0;
}
