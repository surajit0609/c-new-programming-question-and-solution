#include<stdio.h>
int main()
{
	int i=0,j=0;
	int n;
	scanf("%d",&n);
	//nested loop
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(j=0;j<n;j++)
			{
				if(i==0 || i==n-1 || j==0 || j==n-1 || i==j || i+j==n-1 || (i+j>=(n-1) && j<=i ))
				{
					printf("%d%d ",i,j);
				}
				else{
					printf("   ");
				}
			}
		printf("\n");
		}
		printf("\n");
	}
	return 0;
}
