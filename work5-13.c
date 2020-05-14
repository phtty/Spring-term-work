#include "stdio.h"

int main() 
{
    int a,b,c,i; 
    a=c=0; 
    for(i=1;i<=10;i++) 
    {
        scanf("%d",&b); 
        if(b%2 == 0)
            a += b;
        else
            c += b;
    }

    printf("偶数的和=%d\n",a);
    printf("奇数的和=%d\n",c);

    return 0;
} 
