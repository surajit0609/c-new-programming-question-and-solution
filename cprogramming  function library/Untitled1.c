#include<stdio.h>
#include<math.h>
#include<time.h>
int fun1(int n)
{
	int i,sum =0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;//sum+=i;
	}
	return sum;
}
int fun2(int n)
{
	 return(n*(n+1))/2;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	
	double starttime=(double)clock();
	printf("sum of 1 to n using fun2 = %d\n",fun2(n));
	double endtime=(double)clock();
	double duration=(endtime-starttime)/CLOCKS_PER_SEC;
	printf("duration for fun2 %f\n",duration);
	starttime=(double)clock();
	//printf("starttime %f\n",starttime);
	printf("sum of 1 to n using fun1 = %d\n",fun1(n));
	endtime=(double)clock();
	//printf("endtime %f\n",endtime);
	duration=(endtime-starttime)/CLOCKS_PER_SEC;
	printf("duration for fun1 %f\n",duration);
	
	
	
	return 0;

}
