#include<stdio.h>
int main()
{
 int i,n;
		printf("enter the number of numers\n");
		scanf("%d",&n);
		for(i=-9;i<=n;i++){
			if(i>0){
				printf("positive numbers=%d\n",i);
			}
			else {
				printf("negative numbers =%d\n",i);
			}
		}
		return 0;
}
