#include<stdio.h>
 int Even_Odd(int i){
 	 if(i%2==0){
 	 	printf("Even");
	  }
	  else{
	  	printf("Odd");
	  }
 }
 int main(){
 	int i;
 	scanf("%d",&i);
  Even_Odd(i);
  return 0;
 }
