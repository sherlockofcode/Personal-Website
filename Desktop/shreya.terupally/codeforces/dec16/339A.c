#include<stdio.h>
int main()
{
	char str[200];
	char arr[200];
	char str2[200];
	scanf("%s",str);
	int i,l=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!='+')
			arr[l++]=str[i];
	}
	arr[l]='\0';
	l=0;
	int j;
	char temp;
	for(i=0;arr[i]!='\0';i++)
	{
		for(j=i;arr[j]!='\0';j++)
		{
			if(arr[j]<=arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;arr[i]!='\0';i++)
	{
		str2[l++]=arr[i];
		str2[l++]='+';
	}
	str2[--l]='\0';
	printf("%s\n",str2);
	return 0;
}
