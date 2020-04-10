#include <stdio.h>

void main()
{
    int num, temp = 0, res[4], cort = 0;
    scanf("%d", &num);

    while(num != 0)//从各位循环读入各位数字
    {
        res[temp] = num % 10;//先取它除以十的余数，其实就是求这个数的个位数
        num = num / 10;//将这个数缩小十倍，同时由于是整形，小数部分将舍去
        temp++;//位数计数，多一位加1
    }
    printf("The number is a %d digits\n", temp);

    printf("And the number's reverse oder is:");

    while(cort != temp)//循环读出存储的数
    {
        printf("%d", res[cort]);
        cort ++;
    }
    printf("\n");

}
