//程序目标：判断一个输入的数是否是质数
//学生：魏懿航
//最后更新于：2020.3.24
#include <stdio.h>

void main()
{
    int num,temp = 2,k;
    scanf("%d", &num);
    //num为待判断数

    while(temp != num)//temp从2一直累加循环到temp与num相等
    {
        k = num % temp;//取用中间变量来存储余数，可避免一些错误
        if(k == 0)//当num除以temp的余数为0，说明可以整除
        {
            printf("不是质数\n");
            break;//直接解除循环
        }

        temp ++;
    }

//优化后的代码修复了即便判定为“不是质数”也输出了“质数”的bug
    if(k != 0)
        printf("质数\n");

}
