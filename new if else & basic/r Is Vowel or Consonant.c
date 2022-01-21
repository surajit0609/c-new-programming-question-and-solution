#include<stdio.h>
int main()
{
	char ch;
	printf("enter an Alphabet: ");
	scanf("%c",&ch);
	
	if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
		
		printf("\n It's a Vowel");
	}
	else{
		printf("\n It's a Consonant");
	}
	
	return 0;
}
