//even or odd
#include<stdio.h>
int main()
{
	int i,a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		printf("%d\n",a[i]);
		if(a[i]%2==0)
		{
			printf("even number %d\n",a[i]);
		}
		else
		{
			printf("odd number %d\n",a[i]);
		}
		
	}
	return 0;
}
