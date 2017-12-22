#include<stdio.h>
int main()
{
	char str[200];
	scanf("%s",str);
	int i,dist=0;
	int count[200]={0};
	for(i=0;str[i]!='\0';i++)
		count[str[i]]++;
	for(i=97;i<123;i++)
		if(count[i]>0)
			dist++;
	if(dist&1)
		printf("IGNORE HIM!\n");
	else
		printf("CHAT WITH HER!\n");
	
	return 0;
}
