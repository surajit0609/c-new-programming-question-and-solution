#include<stdio.h>

int main(void)
{
    int N=10000;
    int prime[N+1];
    int i,j;
    for(i=0;i<=N;i++)
    {
        prime[i]=1;
    }
    prime[0]=0,prime[1]=0;

    
    for(i=2;i<=N;i++)
    {
        if(prime[i]==1)
        {
            for(j=2*i;j<=N;j=j+i)
            {
                prime[j]=0;
            }
        }
    }


    for(i=0;i<=N;i++)
    {
        if(prime[i]==1)
        {
            printf("%d is prime number\n",i);
        }
    }

    return 0;

}
