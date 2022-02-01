#include<stdio.h>
int main()
{
	int i,a[100];
	printf("enter the valu of array\n");
	for(i=0;i<100;i++){
		if(i<30)
		a[i]=1;
		else
		a[i]=0;
		printf("%d\n",a[i]);
	}
	
	return 0;
}
