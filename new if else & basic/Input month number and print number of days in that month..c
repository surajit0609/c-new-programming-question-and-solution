#include <stdio.h>

int main() {
    int mm;
    printf("enter the month number ");
    scanf("%d",&mm);
    if(mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12 ){
        printf("31days");
    }
    else if(mm==4 || mm==6 || mm==9 || mm==11)
    {
        printf("30 days");
    }
    else if (mm==2){
        printf("28/29 days");
    }
    else {
        printf("invalid month");
    }
	return 0;
}
