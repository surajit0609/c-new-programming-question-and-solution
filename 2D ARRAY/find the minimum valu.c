#include<stdio.h>
int main()
{
	int i,j,a[2][3];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++){
		
		scanf("%d",&a[i][j]);
		if(a[0][0]>a[i][j]){
			a[0][0]=a[i][j];

	}
		}
		
		
	}
	printf("%d",a[0][0]);
	return 0;
	
}
