#include<stdio.h>

#include "mylibariy.h"
int main(void)
{
	float x,a,b,h,s,a1,b1,b2,j,k,l,w,d1,d2,s1,a4,b4,h1;
	
	scanf("%f",&x);
	printf("Area of my circle is %f/n",areaOfCircle(x));
	scanf("%f",&a);
	printf("Area of my square is %f\n",areaOfSquare(a));
	scanf("%f%f",&b,&h);
	printf("Area of my triangle is %f\n",areaOfTriangle(b,h));
	scanf("%f",&s);
	printf("Area of my equilateral triangle is %f\n",areaOfEquilateralTriangle(s));
	scanf("%f%f",&l,&w);
	printf("Area of my  rectangle is %f\n",areaOfRectangle(l,w));
	scanf("%f%f",&j,&k);
	printf("Area of my parallelogram is %f\n", areaOfParallelogram(j,k));
	scanf("%f%f%f",&h1,&b1,&b2);
	printf("Area of my trapezoid is %f\n ",areaOfTrapezoid(h1,b1,b2));
	scanf("%f%f",&d1,&d2);
	printf("Area of my kite is %f\n",areaOfKite(d1,d2));
	scanf("%f",&s1);
	printf("Area of my hexagon is %f\n",areaOfHexagon(s1));
	scanf("%f%f",&a4,&b4);
	printf("Area of my ellipse is %f\n",areaOfEllipse(a4,b4));
	
}
