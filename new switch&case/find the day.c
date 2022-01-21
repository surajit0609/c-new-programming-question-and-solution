// Find The Day

#include<stdio.h>
int main()
{
	int week;
	printf("Enter week number (1-7) :\n");
	scanf("%d",&week);
	switch(week)
	{
		case 1:
		printf("Monday");
		break;
		case 2:
		printf("Tuseday");
		break;
		case 3:
		printf("wednesday");
		break;
		case 4:
		printf("Thursday");
		break;
		case 5:
		printf("Friday");
		break;
		case 6:
		printf("saturday");
		break;
		case 7:
		printf("sunday");
		break;
		defult:
		printf("Invalid input! Please enter week number between 1-7.");
		
		break;
	}
	return 0;
}

