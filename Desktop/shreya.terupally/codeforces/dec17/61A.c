#include<stdio.h>
int main()
{
	char str1[200],str2[200];
	scanf("%s %s",str1,str2);
	char str3[200];
	int i,j;
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==str2[i])
			str3[i]='0';
		else
			str3[i]='1';
	}
	for(j=0;j<i;j++)
		printf("%c",str3[j]);
	printf("\n");
	return 0;
}
