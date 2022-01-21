#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=2;i<=n/2;i=i+1){
		if(n%i==0){
			printf("no\n");
			break;
		}
	
	}
	if(i==n){
		printf("yes");
	}

	return 0;
}
