    #include<stdio.h>
    int T(int N,int K);
    int main()
    {
    	int N,K;
    	scanf("%d %d",&N,&K);
    	printf("%d\n",T(N,K));
    	return 0;
    }
    int T(int N,int K)
    {
    	if(N<=K)
    		return 1;
    	int ret=0,i,x=1000000007;
    	for(i=1;i<=K;i++)
    		ret+=T(N-i,K)%x;
    	return ret%x;
    }
     
