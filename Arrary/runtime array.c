// run time array
#include<stdio.h>
int main()
{
	int i, a[12];
	printf("enter the number of array\n");
	for(i=0;i<12;i++){
		scanf("%d",&a[i]);
	}
	printf("print the valu of array");
	for(i=0;i<12;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
