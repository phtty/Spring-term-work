#include<stdio.h>

void main()
{
    int num[10], temp, x;
    //用一个数组循环读入一组数
    for(temp=0;temp<10;temp++)
    {
        scanf("%d", &x);
        num[temp] = x;
    }
    //倒序输出
    for(temp=9;temp>=0;temp--)
    {
        printf("%d ", num[temp]);
    }
}
//1 2 3 4 5 6 7 8 9 10
//2 4 6 8 10 12 14 16 18 20 
