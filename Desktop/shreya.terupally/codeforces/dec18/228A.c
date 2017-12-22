#include<stdio.h>
int main()
{
	int s[4],j,i=0,dist=0;
	for(i=0;i<4;i++)
		scanf("%d",&s[i]);
	for(i=0;i<4;i++)
	{
		if(s[i]>0)
		{
			dist++;
			for(j=i+1;j<4;j++)
				if(s[j]==s[i])
				s[j]=-1;
		}
	}

	printf("%d\n",4-dist);

	return 0;
}
