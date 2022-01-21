#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	int sum=0;
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
		if(a[i]%2==0){
			sum=sum+2*a[i];
		}
		else{
			sum=sum+10;
		}
		
	}
	printf("%d",sum);
	return 0;
}
