//Write a program in C to display the pattern like right angle triangle using an asterisk.
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++){
		printf("\n");
		for(j=1;j<=i;j++)
	printf("*");
	}
		
	return 0;
}
