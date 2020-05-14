#include <stdio.h>

void inv(int *p,int n);

int main(void)
{   
    int i, n,*p ,num[] = {2,8,6,7,3,5,3,4,9,1};
    p = num;
    n = sizeof(num)/sizeof(num[0])-1;
    inv(p, n);

    for(i = 0;i <= n;i++)
    {
        printf("%d", num[i]);
    }

    return 0;
}

void inv(int *p,int n)
{
    int *i, *j, temp, *top;
    i = p;
    j = p+n;
    top = i+n/2;
    for(;i <= top;i++)
    {
        temp = *i;
        *i = *j;
        *j = temp;
        j--;
    }
}