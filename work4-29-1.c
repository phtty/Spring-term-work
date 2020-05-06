#include <stdio.h>

int main(void)
{
    //初始化
    int i = 0,num[10];
    //将指针指向数组的第一个元素
    int *p = num;
    //循环读入10个数到num数组
    for(;i<10;i++)
        scanf("%d", &num[i]);
    //用指针读取这个数组的每个元素
    for(;p<=&num[9];p++)
        printf("%d ",*p);

    return 0;
}