#include <stdio.h>
#include <math.h>

void main()
{
    int num, temp = 0, i;
    double res[3];

    for(num = 100;num < 1000;num++)
    {
        i = num;//用i代替num进行运算，以免循环出错
        while(i != 0)//从各位循环读入各位数字
        {
            res[temp] = i % 10;//先取它除以十的余数，其实就是求这个数的个位数
            i = i / 10;//将这个数缩小十倍，同时由于是整形，小数部分将舍去
            temp++;
        }
        //判断是否为水仙花数
        if(num == pow(res[0],3) + pow(res[1],3) + pow(res[2],3))
            printf("num = %d\n", num);
        //重置temp，让它在下次循环开始时初始值为 0
        temp = 0;
    }
}
