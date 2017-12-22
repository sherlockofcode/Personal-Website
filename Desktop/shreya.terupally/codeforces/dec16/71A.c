#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	char *str1,*str2;
	str1=(char*)malloc(100*sizeof(char));
	str2=(char*)malloc(5*sizeof(char));
	while(n--)
	{
		scanf("%s",str1);
		str2[0]=str1[0];
		int len;
		for(len=0;str1[len]!='\0';len++);
		if(len>10)
		{
			if((len-2)<10)
			{
				str2[1]=(len-2)+48;
				str2[2]=str1[len-1];
				str2[3]='\0';
			}
			else{
			str2[1]=(len-2)/10+48;
			str2[2]=(len-2)%10+48;
			str2[3]=str1[len-1];
			str2[4]='\0';
			}
			printf("%s\n",str2);
		}
		else
			printf("%s\n",str1);


	}
	free(str1);
	free(str2);
	return 0;
}	
