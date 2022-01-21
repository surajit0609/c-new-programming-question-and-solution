#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{char ch;
char s[100];
char sn[100];
scanf("%c\n",&ch);
 scanf("%s\n",&s);
 scanf("%[^\n]%*c",&sn);
printf("%c\n",ch);
 printf("%s\n",s);  
 printf("%s",sn);
    return 0;
}
