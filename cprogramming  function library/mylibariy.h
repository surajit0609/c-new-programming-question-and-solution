
#define _USE_MATH_DEFINES
#include<math.h>

//calculate area of circle
float areaOfCircle(float r)
{
	float area=M_PI*r*r;
	return area;
}
// calculate area of square
float areaOfSquare(float a)
{
	float area=a*a;
	return area;
	
}
// calculate area of triangle
float areaOfTriangle(float b,float h)
{
	float area=0.5*b*h;
	return area;
}

// calculate area of equilateral triangle
float areaOfEquilateralTriangle(float s)
{

 
 float area =s*s;
 
 return area;
}
// calculate area of rectangle
float areaOfRectangle(float l, float w)
{
	float area =l*w;
	return area;
}
// calculate area of parallelogram
float areaOfParallelogram(float j,float k)
{
	float area =j*k;
	return area;
	
}
// calculate area of trapezoid
float areaOfTrapezoid(float h1,float b1,float b2)
{
	float area =0.5*h1*(b1+b2);
	
	return area;
}
// calculate area of kite
float areaOfKite(float d1,float d2)
{
	float area =d1*d2;
	return area;
}
// calculate area of hexagon
float areaOfHexagon(float s1)
{
	float area=2.5980*s1*s1;
	return area;
}
// calculate area of ellipse
float areaOfEllipse(float a4,float b4)
{
	
	float area=M_PI*a4*b4;
	
	return area;
}

