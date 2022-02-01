// wap  a read maskes of 5 student ,calculet sum and average using array
#include<stdio.h>
int main()
{
	int i,sum=0,student[5];
float aver;
	for(i=0;i<5;i++)
	{
		scanf("%d",&student[i]);
	}
	for(i=0;i<5;i++)
	{
		//printf("%d\n",student[i]);
		sum=sum+student[i];
	}
	printf("%d\n",sum);
	aver =sum/5;
	printf("%f\n",aver);
	return 0;
}

