#include<stdio.h>
int main()
{
	int age;
	printf("enter age of person");
	scanf("%d",&age);
	if(age>17){
		printf("Person is Eligible for Voting");
	}
	else{
		printf("person is not eligible for voting");
	}
	return 0;
}
