#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int n,m;
scanf("%d %d", &n, &m);
float f,g;
scanf("%f%f",&f,&g);
int sum,difference;	
  sum=n+m;
  difference=n-m;
  printf("%d %d\n",sum,difference);
  float sum1,difference1;
  sum1=g+f;
  difference1=f-g;  
printf("%.1f %.1f\t",sum1,difference1);  
    return 0;
}

