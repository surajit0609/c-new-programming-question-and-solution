#include<stdio.h>
int main()
{
	int a[5]={10,25,20,15,30};
	int i,oddsum=0,evensum=0;
	int sum1,sum2;
	for(i=0;i<5;i++){
		if(a[i]%2==0)
		
		evensum= evensum+a[i];
		else
			oddsum=oddsum+a[i];
		
	}
	printf("sum of even number %d\n",evensum);
		printf("sum of  odd number %d\n",oddsum);
	
	return 0;
}
