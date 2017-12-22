#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,t;
	scanf("%d %d",&n,&t);
	char* str=(char*)malloc((n+1)*sizeof(char));
	char* str2=(char*)malloc((n+1)*sizeof(char));
	scanf("%s",str);
	int i;
	char temp;
	for(i=0;str[i]!='\0';i++)
		str2[i]=str[i];
	str2[n]='\0';
	while(t--){
	for(i=1;str[i]!='\0';i++)
	{
		if(str[i]=='G'&&str[i-1]=='B')
		{
			temp=str2[i];
			str2[i]=str2[i-1];
			str2[i-1]=temp;
		}
	}
	for(i=0;str[i]!='\0';i++)
		str[i]=str2[i];
	}
	printf("%s\n",str2);
	free(str);
	free(str2);
	return 0;
}
