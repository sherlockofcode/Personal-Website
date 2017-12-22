#include<stdio.h>
int main()
{
	int T,R,i;
	int arr[4][2];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&R);
		for(i=0;i<3;i++)
			scanf("%d %d",&arr[i][0],&arr[i][1]);
		arr[3][0]=arr[0][0];
		arr[3][1]=arr[3][1];
		int d[3],flag=0;
		for(i=0;i<3;i++)
		{
			d[i]=(arr[i][0]-arr[i+1][0])*(arr[i][0]-arr[i+1][0])+(arr[i][1]-arr[i+1][1])*(arr[i][1]-arr[i+1][1]);
			if(d[i]<=R*R)
				flag++;
		}
		
		if(flag>=2)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
