#include<stdio.h>
int sieve[10000];
int main()
{
	int i,j;
	for(i=2;i<10000;i++)
		sieve[i]=1;
	for(i=2;i<10000;i++)
	{
		if(sieve[i])
		{
			for(j=2*i;j<10000;j+=i)
				sieve[j]=0;
		}
	}
	
	for(i=0;i<100;i++)
	{
		if(sieve[i])
			printf("%d\n",i);
	}
	return 0;
}
