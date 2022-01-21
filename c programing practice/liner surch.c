#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x;
    printf("enter number to search\n");
    scanf("%d",&x);
    
    int present=0;
    
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            present+=1;
            printf("yes %d is present at location %d\n",x,i);
        }
    }
    if(present==0)
        printf("no\n");
    else{
        printf("%d is present %d times",x,present);
  
}
return 0;
}
