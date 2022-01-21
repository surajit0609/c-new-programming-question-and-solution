// Find A Grade Of Given Marks
#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks (0-100)\n");
	scanf("%d",&marks);
	switch(marks/10)
	{
	case 10:
	printf("your grade is AA");
	break;
	case 9:
	printf("your grade is A+");
	break;
	case 8:
	printf("your grade is A");
	break;
	case 7:
	printf("your grade is B+");
	break;
	case 6:
	printf("your grade is B");
	break;
	case 5:
	printf("your grade is C+");
	break;
	case 4:
	printf("your grade is C");
	break;
	case 3:
	printf("your grade is D");
	break;
	default :
	printf("Invalid Grade");
	break;	
	}
	return 0;
}
