#include <stdio.h>

float power(double bas, int exp)
{
    int i;
    long double sum = 1.0;

    for(i=1;i<=exp;i++)
    {
        sum *= bas;
    }
    return sum;
}

int main(void)
{
    double a;
    int b;
    printf("计算x的n次方，请依次输入x和n：\n");

    scanf("%f %d", &a, &b);
    printf("%E",power(a, b));

    return 0;
}