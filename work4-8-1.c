 #include <stdio.h>

 void main()
 {
    int num[10], temp, mid, x;
    //循环输入10个整数
    for(temp=0;temp<10;temp++)
    {
        scanf("%d", &x);
        num[temp] = x;
    }
    //将这10个数降序排序

    int i, j;

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
    //输出排序后的第一个数
    printf("%d", num[0]);

 }


