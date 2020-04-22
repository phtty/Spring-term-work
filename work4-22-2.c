#include <stdio.h>

float power(float bas, int exp)
{
    int i, sum=1;

    for(i=1;i<=exp;i++)
    {
        sum *= bas;
    }
    return sum;
}

int main(void)
{
    float a;
    int b;
    printf("计算x的n次方，请依次输入x和n：\n");

    scanf("%f %d", &a, &b);
    printf("%.2f",power(a, b));

    return 0;
}