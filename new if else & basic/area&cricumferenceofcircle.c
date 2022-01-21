#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

 float cricumferenceOfCircle(float r)
 {
 	float cricumference  =M_PI*2*r;
 	
 	return cricumference;
 }
 float areaOfCircle(float a)
 {
 	float area =M_PI*a*a;
 	return area;
 }
 int main()
 {
 	float a, r;
 	scanf("%f",&r);
 	printf("value of cricumference %f\n",cricumferenceOfCircle( r));
 	
 	scanf("%f",&a);
 	printf("value of area %f",areaOfCircle( a));
 	
 	return 0;
 }

