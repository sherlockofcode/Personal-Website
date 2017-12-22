#include<stdio.h>
int main()
{
	char str[10000];
	scanf("%s",str);
	if(str[0]>91)
		str[0]-=32;
	printf("%s\n",str);

	return 0;
}
