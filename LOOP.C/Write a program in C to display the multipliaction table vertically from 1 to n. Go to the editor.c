 //Write a program in C to display the multipliaction table vertically from 1 to n. Go to the editor
//Test Data :
#include<stdio.h>
int main()
{
	int i,j,mul;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=8;j++){
			mul=i*j;
			printf("%d X %d = %d,",j,i,mul);
			
		}
		printf(" \n");
	}
	return 0;
}
