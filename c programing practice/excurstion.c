
#include<stdio.h>
int main()
{
	int t,n,N,M,K;
	scanf("%d",&n);
	int sum=0;
	int nums=0;
	int sum1=0;
	for(t=1;t<=n;t++){
		scanf("%d%d%d",&N,&M,&K);
		sum=sum+(N/K);
		nums=nums+(M/K);
		if(N%K!=0){
			sum=sum+1;
		}
		else if(M%K!=0){
			nums=nums+1;
		}
		sum1=sum1+sum+nums;
		printf("%d",sum1);
	}

	return 0;
}
