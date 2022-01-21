#include<stdio.h>
int Even_fun(int i){
int Even=i%2==0;
return Even;
}
int main()
{
	int i;
	scanf("%d",&i);
	printf("%d",Even_fun(i));
	return 0;
}
