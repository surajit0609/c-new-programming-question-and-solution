#include<stdio.h>
int main()
{
int age;

printf("enter the age of the age:\n");
scanf("%d",&age);

if(age<2){
	printf("infant");
}else if(age <10){
	
	printf("child");
} else if(age<20){
	
	printf(" tangent");
} else if (age<30){
	
	printf("adult");
	
  }else   {
	
	printf("old");
  }	
	
	return 0;
}
