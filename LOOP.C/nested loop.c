#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++){
		printf("\n");
		for(j=1;j<=5;j++)
		{
			if(i==j || j==5 || i==4){
				printf("   ");
			}
			else{
				printf("%d%d ",i,j);
			}
		}
	}
		
	return 0;
}
