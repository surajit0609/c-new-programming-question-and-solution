
//c program to validate date (Check date is valid or not)./
 
#include <stdio.h>
 int main()
 {
 	int dd,mm,yy;
 	printf("Enter the date(dd/mm/yy formate) :");
 	scanf("%d%d%d",&dd,&mm,&yy);
 //	printf("%d%d%d",dd,mm,yy);
 	if(yy>=1900 && yy<=9999){
 		
 		if(mm>=1 && mm<=12){
 			
 			if(( dd==31) &&(mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
 			printf("The date is valid.\n");
 			else if(( dd==30) && (mm!=2))
 			printf("the date is valid.\n");
 			else if(dd==29){
 				if((mm==2&&(yy%400==0 || (yy%4==0 && yy%100!=0))) || mm!=2){
 					printf("the date is valid.\n");
				 }
			 }
 			else if((dd>=1 && dd<=28 )){
			 
 			printf("the date is valid.\n");
 			
		 }
		 else{
		 	printf("the date is notvalid.\n");
		 }
	}
		 
		 else {
		
		 	printf("the date is notvalide");
		 }
}
		  return 0;
	 }

