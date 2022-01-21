#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=3;i<=n;i=i+1){
		if(i%2==0 ||i%3==0 || i%4==0 || i%5==0 || i%6==0 || i%7==0 || i%8==0 || i%9==0 || i%10==0){
			printf("no\n");
		}
		else if(i%1==0 && i%i==0){
			printf("yes\n");
		}
	}
	return 0;
}
