#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>
float functionOfSimpleInterest(float p,float r,float t)
{
	float simpleinterest=p*(r/100)*t;
	
	return simpleinterest;
}

int main()
{
	float p,r,t;
	scanf("%f%f%f",&p,&r,&t);
	printf("%.1f%.1f%.1f\n",functionOfSimpleInterest(p,r,t));
	
	return 0;
	
}


