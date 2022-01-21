 //Write a program in C to display the cube of the number upto given an integer
 #include <stdio.h>
int main()
 {
    int i,n;
    printf("Input number of terms : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
	 printf("Number is : %d and cube of the %d is :%d \n",i,i, (i*i*i));     
    }
 }
