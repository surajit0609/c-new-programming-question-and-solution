#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==n/3||(j<=n/3&&i==n)||(j<=n/3&&i==1)||(j==1&&i<=n/2+1)||(i==n/2+1&&j<=n/3)||(i==1&&j<=n/2+2&&j>=n/2+1)||(j==n/2+1&&i<=n/2+1)||(i==n/2+1&&j<=n/2+2&&j>=n/2+1)||(j==n/2+2&&i>=n/2+1)||(i==n&&j<=n/2+2&&j>=n/2+1)||j==n||(i==1&&j<=n&&j>=n/2+3)||(j==n/2+3&&i<=n/2+1)||(i==n/2+1&&j<=n&&j>=n/2+3)||(i==n&&j<=n&&j>=n/2+3))
			printf("* ");
			else
			printf("  ");
		}
		printf(" \n");
	}
	return 0;
}
