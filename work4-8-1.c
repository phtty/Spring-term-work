 #include <stdio.h>

 void main()
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
    //输出第一个数，由于被降序排列，这个数必定为最大
    printf("%d", num[0]);

 }


