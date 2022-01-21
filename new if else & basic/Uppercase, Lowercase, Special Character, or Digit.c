#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	if(n>=45 && n<=79){
		printf("Uppercase value");
	}
	else{
		printf("Lowercase value");
	}
	return 0;
}
