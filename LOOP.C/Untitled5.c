 //Write a program in C to display the multipliaction table vertically from 1 to n. Go to the editor
//Test Data :
#include<stdio.h>
int main()
{
	int i,j,mul;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++){
			mul=i*j;
			printf("%d X %d = %d,",i,j,mul);
			
		}
		printf(" \n");
	}
	return 0;
}
