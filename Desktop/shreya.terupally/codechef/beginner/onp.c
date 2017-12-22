#include<stdio.h>
char str2[400];
int function(char str[],int start,int end,int l);
int main()
{
	int T,i;
	scanf("%d",&T);
	char str[400];
	while(T--)
	{
		scanf("%s",str);
		int len;
		for(len=0;str[len]!='\0';len++);
		len=function(str,0,len-1,0);
		for(i=0;i<len;i++)
			printf("%c",str2[i]);
		printf("\n");
		
	}
	return 0;
}
int function(char str[],int start,int end,int l)
{
	if(str[start]!='(')
	{
		str2[l++]=str[start];
		return 1;
	}
	char operator;
	int open=0,i;
	for(i=start;i<=end;i++)
	{
		if(str[i]=='(')
			open++;
		else if(str[i]==')')
			open--;
		else if(open==1&&(str[i]<'a'||str[i]>'z'))
		{
			operator=str[i];
			break;
		}

	}
	int len1=function(str,start+1,i-1,l);
	l+=len1;
	int len2=function(str,i+1,end-1,l);
	l+=len2;
	str2[l++]=operator;
	
	return len1+len2+1;

}
