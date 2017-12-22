#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i,j;
	char mat[n][m];
	for(i=0;i<n;i++)
	{
		if(i&1){
		for(j=0;j<m;j++)
			mat[i][j]='.';
		if(((i+1)/2)&1)
			mat[i][m-1]='#';
		else
			mat[i][0]='#';
		}
		else
		{
			for(j=0;j<m;j++)
				mat[i][j]='#';
		}
		for(j=0;j<m;j++)
			printf("%c",mat[i][j]);
		printf("\n");
	}


	return 0;
}
