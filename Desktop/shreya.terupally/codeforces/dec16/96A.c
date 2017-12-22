#include<stdio.h>
int main()
{

	char str[200];
	scanf("%s",str);
	int i,len=0,danger=0;
	for(len=0;str[len]!='\0';len++);
	for(i=0;i<len-1;i++)
	{
		if(str[i+1]!=str[i])
			danger=0;
		else
			danger++;
		if(danger>=6)
			break;
	}
	if(danger>=6)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}

