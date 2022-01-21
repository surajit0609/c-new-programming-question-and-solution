//Write a program in C to read 10 numbers from keyboard and find their sum and average.
#include<stdio.h>
 int main()
 {
 	int i=1,sum=0;
 	float avg=0.0;
 	int n=10;
 	for(i=1;i<=n;i++){
 		sum+=i;
 		 avg=(float)sum/n;
	 }
	 printf("%d\n",sum);
	printf("%f",avg);
 }
