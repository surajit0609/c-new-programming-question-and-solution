#include<stdio.h>
int main()
{
	
	char i,j,n;
	printf("enter the rows numbers:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}

