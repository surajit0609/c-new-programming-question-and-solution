// write a program to demonstrate the use of nested if structure.
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the two numbers: \n");
	scanf("%d%d",&x,&y);
	if(x==y)
	printf("two numbers are equal");
	else if(x>y)
	printf("%d is greater then %d",x,y);
	else
	printf("%d is smaller then %d",x,y);
	return 0;
}
