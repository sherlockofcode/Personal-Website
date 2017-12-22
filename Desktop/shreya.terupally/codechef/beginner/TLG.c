#include<stdio.h>
int main()
{

	int N;
	int p1=0,p2=0;
	scanf("%d",&N);
	int l1=-1,l2=-1;
	int s1,s2;
	while(N--)
	{
		scanf("%d %d",&s1,&s2);
		p1+=s1;
		p2+=s2;
		if(p1-p2>l1)
			l1=p1-p2;
		else if(p2-p1>l2)
			l2=p2-p1;
	}
	if(l1>l2)
		printf("1 %d\n",l1);
	else
		printf("2 %d\n",l2);

	return 0;
}
