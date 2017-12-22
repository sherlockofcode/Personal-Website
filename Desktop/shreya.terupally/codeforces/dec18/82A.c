#include<stdio.h>
int main()
{
	int n,N;
	scanf("%d",&N);
	n=N-1;
	int x=(n)/5+1;
	int arr,i;
	for(i=0;i<31;i++)
		if(x<=((1<<(i+1))-1))
			break;
	//printf("i=%d ",i);
	//if(n>4)
	arr=(n-5*((1<<i)-1))/(1<<i);
	//else
	//	arr=n;
	//printf("arr=%d",arr);
	if(arr%5==0)
		printf("Sheldon\n");
	else if(arr%5==1)
		printf("Leonard\n");
	else if(arr%5==2)
		printf("Penny\n");
	else if(arr%5==3)
		printf("Rajesh\n");
	else
		printf("Howard\n");
	

	return 0;
}
