// Greatest of Two Numbers
#include<stdio.h>
int main()
{
	int a,b;
	printf("Insert two numbers: ");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("a is the greatest %d",a);
	}
	else if(b>a){
		printf("b is the greatest %d",b);
	}
	else{
		printf("a and b are equal %d\t%d", a,b);
		
	}
	return 0;
}
