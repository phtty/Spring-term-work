#include <stdio.h>

void main()
{
    int one = 1, two = 2, five = 5;
    //初始化

    //三重嵌套循环遍历三种面额的每一种方案
    while(one <= 100)
    {
        two = 2;
        //重置两分面额的循环计数，根据题目要求，初始值为两分
        while(two <= 100)
        {
            five = 5;
            //重置五分面额的循环计数，根据题目要求，初始值为五分
            while(five <= 100)
            {
                //如果面额加起来等于100分，就输出这种方案
                if(one + two + five == 100)
                {
                    printf("一分:%d个；两分:%d个；五分:%d个。\n", one, two/2, five/5);
                }

                five += 5;
            }

            two += 2;
        }

        one ++;
    }

    //此程序有改成for循环的基础，这里只给出while的方案
}
