#include <stdio.h>

void main()
{
    int num,temp = 2;
    scanf("%d", &num);

    while(temp != num)//循环为temp从2一直循环到temp与num相等
    {
        if(num % temp == 0)//当num除以temp的余数为0，说明可以整除
        {
            printf("不是质数\n");
            break;//直接解除循环
        }
        temp ++;
    }

//减1是为了不让temp等于num，如果输入是质数，则会导致循环退出时num等于temp
    if(num % (temp-1) != 0)
        printf("质数\n");

}
