// make a simple calculator:
#include<stdio.h>
#include<math.h>
float add_fun(float a,float b){
	float add =a+b;
	return add;
}
float sub_fun(float x,float y ){
	float sub =x-y;
	return sub;
}
float mal_fun(float a1,float b1 ){
	float mal =a1*b1;
	return mal;
}
float div_fun(float x1,float x2){
	float div=x1/x2;
	return div;
}
int main()
{
	float a,b,x,y,x1,x2,a1,b1;
	scanf("%f%f",&x1,&x2);
	printf("%f%f",add_fun(x1,x2));
	scanf("%f%f",&x,&y);
	printf("%f%f",sub_fun(x,y));
	scanf("%f%f",&a1,&b1);
	printf("%f%f",mal_fun(a1,b1));
	scanf("%f%f",&x1,&x2);
	printf("%f%f",div_fun(x1,x2));
	
	return 0;
}
