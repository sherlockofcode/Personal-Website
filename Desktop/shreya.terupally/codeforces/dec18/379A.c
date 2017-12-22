#include<stdio.h>
int main()
{
	int a,b,out=0,ncandles,left=0;
	scanf("%d %d",&a,&b);
	ncandles=a;
	out=a;
	while(ncandles)
	{
		out+=ncandles/b;
		if(ncandles/b)
		left=ncandles%b;
		else left=0;
		ncandles=ncandles/b+left;
	}
	printf("%d\n",out);
	return 0;
}
