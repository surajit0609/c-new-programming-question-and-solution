#include<stdio.h>
int greatestOfThreeNumbers(int a,int b,int c)
{
	if(a>b && a>c){
		
		return a;
	}
	else if(b>a && b>c){
		return b;
	}
	else {
		return c;
	}
}
int main()
{

int a,b,c;
scanf("%d%d%d",&a,&b,&c);
printf("the Greatest valu %d\n",greatestOfThreeNumbers(a,b,c));
return 0;}

