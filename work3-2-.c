#include <stdio.h>

void main()
{
    int a, b, c, max;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
        max = a;
    else if(b > c && b > a)
        max = b;
    else if(c > b && c > a)
        max = c;

    printf("Max number is %d\n", max);
}
