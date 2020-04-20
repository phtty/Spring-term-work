#include <stdio.h>

int main(void)
{
    int num[10], temp, mid, x;
    //循环读入10个数至num数组
    for(temp=0;temp<10;temp++)
    {
        scanf("%d", &x);
        num[temp] = x;
    }

    int i, j;
    //降序排序这个数组
    for(i=0;i<=8;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(num[i] < num[j])
            {
                mid = num[j];
                num[j] = num[i];
                num[i] = mid;
            }
        }
    }

    printf("\n");

    for(temp = 0;temp < sizeof(num)/sizeof(num[0]);temp++)
        printf("%d ", num[temp]);
    
    return 0;
}