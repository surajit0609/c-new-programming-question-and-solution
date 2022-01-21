#include<stdio.h>
#include<string.h>
int main()
{
	char A[]="india";
	char B[]="west bengal";
	 int s=strcmp(A,B);
	 if(s==0){
	 	printf("A and B is equal\n");
	 }
	 else{
	 	printf("A and B is not equal \n");
	 }
	 return 0;
}
