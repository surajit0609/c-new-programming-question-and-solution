// write a program to enter any character.if the entered character is in lower case then convert it into 
// upper case and if it is a lower case character then convert it into upper case.
#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character :\n");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("The entered character was in upper case.In lower case it is : %c\n",(ch+32));
	}
	else{
		printf("The entered character was in lower case.In upper case it is : %c\n",(ch-32));
	}
	return 0;
}
