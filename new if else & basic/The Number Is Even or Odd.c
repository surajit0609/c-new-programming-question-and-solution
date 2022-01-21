//The Number Is Even or Odd
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number of n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	
		if(i%2==0){
			printf("even value:%d\n",i);
		}else{
			
			printf("odd value:%d\n",i);
		}
	}
	printf("\n");
	return 0;
}
