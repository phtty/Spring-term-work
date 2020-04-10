#include <stdio.h>
#include <math.h>

void main()
{
    int i = 0, j;
    float  p;

    for(i = -3;i <= 3;i++)
    {
        //利用绝对值函数来实现当i比0小的时候，增大i反而会使它的绝对值减小。
        for(j = 1;j <= abs(i);j++)//此部分循环控制空格的输出
        {                         //空格的个数跟i的绝对值成正比关系
            printf(" ");
        }
        //这部分是控制星号的输出，通过调整步进值来达到奇数个星号起步，但依然
        //每次能增加两个星号的目的
        for(p = 0;p < 3.5-abs(i);p=p+0.5)
        {
            printf("*");
        }

        printf("\n");

    }

}
