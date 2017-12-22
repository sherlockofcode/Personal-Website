#include<stdio.h>
int main()
{
	int T,N;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		float oldguess,newguess;
		newguess=N/2.0;
		while(oldguess!=newguess)
		{
			oldguess=newguess;
			newguess=oldguess/2.0+(N/oldguess)/2.0;
		}

		printf("%d\n",(int)newguess);
		

	}
	return 0;
}
