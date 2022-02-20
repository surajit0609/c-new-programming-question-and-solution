#include<stdio.h>
int main(){

int m,i,a[5];
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
m=a[0];
for(i=1;i<5;i++){
	if(m<a[i]){
		m=a[i];
	}
	
}
printf("%d",m);
return 0;
}
