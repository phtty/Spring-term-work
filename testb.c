#include <stdio.h>

int main(void)
{
    int test[10];
    int i;

    for(i=0;i<=9;i++)
    {//初始化数组
        test[i] = 0;
    }

    for(i=0;i<=9;i++)
    {//遍历并输出数组每一个元素在内存中的地址
        printf("%d\n", &test[i]);
    }

    return 0;
}