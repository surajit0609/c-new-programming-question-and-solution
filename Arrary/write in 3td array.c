// write dowen 2 array and sum 3no array in store in index
#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i;
	printf("enter the first array\n");
	for(i=0;i<5;i++)
	
	scanf("%d",a[i]);
	printf("enter the second array\n");
	for(i=0;i<5;i++)
	
	scanf("%d",b[i]);
	for(i=0;i<5;i++){
		c[i]=a[i]+b[i];
		printf("%d",c[i]);
	}
	return 0;
}
