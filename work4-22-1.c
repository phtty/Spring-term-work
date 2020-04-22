#include <stdio.h>
int gys(int n)
{
    int i, j = n;
    for(i = 1;i < n;i++)
    {
        if(n % i == 0)
            j = i;
    }
    return j;
}
int gbs(int m, int n)
{
    int i, j;
    for(i=m*n;i>=1;i--)
    {
        if(i%m==0 && i%n==0)
            j = i;
    }
    return j;
}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("最小公倍数：%d\n最大公因数：%d %d", gbs(a, b), gys(a), gys(b));
    return 0;
}