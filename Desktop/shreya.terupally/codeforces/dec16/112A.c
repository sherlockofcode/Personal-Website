#include<stdio.h>
int main()
{
	char str1[200],str2[200];
	scanf("%s %s",str1,str2);
	int i,comp1=0;
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]<=91)
			str1[i]+=32;
		if(str2[i]<=91)
			str2[i]+=32;
		if(str1[i]<str2[i])
		{
			comp1=-1;
			break;
		}
		else if(str1[i]>str2[i])
		{
			comp1=1;
			break;
		}
	}
	
	printf("%d\n",comp1);

	return 0;
}
