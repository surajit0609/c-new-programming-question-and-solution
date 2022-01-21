#include<stdio.h>
int main()
{
	//D=65 ASCII
	char i,j,n;
	printf("enter the rows numbers:");
	scanf("%d",&n);
	for(i='A';i<=n;i++){
		for(j='A';j<=n;j++){
			printf("%c ",j);
		}
		printf("\n");
	}
	return 0;
}

