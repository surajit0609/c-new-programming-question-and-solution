#include<stdio.h>
#include<math.h>
int main()
{
	 int num;
	 do{
	 	printf("Enter the number of num\n");
	 	scanf("%d",&num);
	 	if (num==999)
	 	break;
	 	if(num<0){
	 		printf("square root of negative number is not defined");
	 		continue;
		 }
		 printf("%d  %f",num,sqrt(num));
	 }
	 while(num);
	 return 0;
}
