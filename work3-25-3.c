#include <stdio.h>
#include <math.h>

void main()
{
    int num, temp, sum;

    for(num = 1;num < 1000;num++)
    {
        sum = 0;//每次循环前初始化sum
        //遍历一遍比num小1的数到1的区间
        for(temp = num-1;temp >= 1;temp--)
        {
            if(num % temp == 0)//如果num除以这个区间里的数余为零，那么这个
            {                  //数肯定是num的因子
                sum = sum + temp;//将这个数累加到sum里
            }
        }
       // printf("%d\n",sum);
        if(num == sum)//将num与它的因子和sum作比较，如果相等，说明找到了
        {
            printf("%d:its factors are ", num);
            //重复一遍之前求因子的过程来输出所有因子
            for(temp = num-1;temp >= 1;temp--)
            {
                if(num % temp == 0)
                    printf("%d ", temp);
            }
            printf("\n");
        }
    }



}
