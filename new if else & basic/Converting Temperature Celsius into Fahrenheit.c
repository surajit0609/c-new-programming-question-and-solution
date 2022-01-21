#include<stdio.h>
int main ()
{
	float celsius,fahrenheit;
	
	printf("enter the value of celsius\n");
	scanf("%f",&celsius);
	fahrenheit =(celsius*5/9)+32;
	printf("%.1f celsius=%.1f fahrenheit",celsius,fahrenheit);
	return 0;
}
