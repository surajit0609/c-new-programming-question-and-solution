#include<stdio.h>
int main()
{
	int i,n,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||j==n||i==n||i==n/2+1)
			printf("* ");
			else
			printf("  ");
		}
		printf(" \n");
	}
	return 0;
}
