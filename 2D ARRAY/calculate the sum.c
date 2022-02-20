#include<stdio.h>
int main()
{
	int n,m;
	int i,j,a[n][m],sum=0;
	printf("Enter the number of n:-\n");
		scanf("%d",&n);
	printf("Enter the number of m:-\n");
	scanf("%d",&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("print the valu\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\n",a[i][j]);
			sum=sum+a[i][j];
			
		}
		printf("\n");
	}
	printf("%d",sum);
	return 0;
}
