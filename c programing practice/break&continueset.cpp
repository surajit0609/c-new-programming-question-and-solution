#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<5;i++){
		printf("hello\n");
		if(i==3)
		continue;
		printf("yes\n");
	}
	
	return 0;
}
