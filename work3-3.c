#include <stdio.h>

void main()
{
    int x;

    scanf("%d", &x);

    if(x < 1)
        printf("%d", x);
    else if(x >= 1 && x < 10)
        printf("%d", 2*x-1);
    else if(x >= 10)
        printf("%d", 3*x-11);
}
