// Check whether a number is negative, positive or zero.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter this number\n");
	scanf("%d",&n);
	if(n>0){
		printf("positive nuber %d",n);
	}
	else if(n<0)
	{
		printf("negative number %d",n);
	}
	else{
		printf(" zero number %d",n);
	}
	return 0;
}
