//Temperature Conversion Celsius To Fahrenheit And Vice Versa
#include<stdio.h>
int main()
{
	 float a,b,fahrenheit,celsius;
	 int x;
	 printf("1.for fahrenheit to celsius\n");
	 printf("2.for celsius to fahrenheit\n");
	 printf("enter your choice\n");
	 scanf("%d",&x);
	 switch(x)
	 {
	 	case 1:
	 	printf("\nEnter The Value of Fahrenheit Temperature: ");
	 	scanf("%f",&a);
	 	celsius=(a-32)*5/9;
	 	printf("%f",celsius);
	 	break;
	 	
	 	case 2:
	 	printf("\nEnter The Value of Celsius Temperature: ");
	 	scanf("%f",&b);
	 	fahrenheit=(b*9/5)+32;
	 	printf("%f",fahrenheit);
	 	break;
	 	default:
 printf("\n\nWrong Choice.....Try Again!!!\n");
	 }
	 return 0;
	 
}
