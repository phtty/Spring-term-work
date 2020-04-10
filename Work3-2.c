#include <stdio.h>

void main()
{
    float a,b;
    scanf("%f %f", &a, &b);
    if(a < b)
    {
        printf("%f,%f\n", a, b);
    }
    else if(a > b)
    {
        printf("%f,%f\n", b, a);
    }
    else
    {
        printf("%f = %f\n", a, b);
    }
}
