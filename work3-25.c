#include <stdio.h>

void main()
{
    unsigned long long sum = 0, temp = 1;
    int j,k;

    for(int i=1;i <= 20;i++)
    {
        temp = temp * i;

        printf("%u + ", temp);
        sum = sum + temp;
    }
    printf("\b\b= %u", sum);
}
