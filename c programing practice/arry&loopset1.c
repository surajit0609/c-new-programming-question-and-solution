#include<stdio.h>
int main()
{
	int a[10];
	int i,sum=0;
	for(i=0;i<10;i++){
		scanf("%d\n",&a[i]);
		sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
