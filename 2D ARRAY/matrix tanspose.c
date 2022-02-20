// matrix tanspose
#include<stdio.h>
int main()
{
	int n,m;
	int i,j,a[n][m];
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
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			
			printf("%d\t",a[j][i]);
		
			
		}
		printf("\n");
	}

	return 0;
}
