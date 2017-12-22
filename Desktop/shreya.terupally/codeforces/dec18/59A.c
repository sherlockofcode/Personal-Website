#include<stdio.h>
int main()
{
	char str[200];
	scanf("%s",str);
	int caps=0,small=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]<91)caps++;
		else small++;
	}
	for(i=0;i<caps+small;i++)
	{
		if(caps>small)
		{
			if(str[i]>91)
				str[i]-=32;
		}
		else
			if(str[i]<91)
				str[i]+=32;		
	}
	printf("%s\n",str);
	return 0;
}
