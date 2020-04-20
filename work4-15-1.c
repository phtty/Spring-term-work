#include <stdio.h>

int main(void)
{
    int m;
    char month[12][10] = {
                        "January",
                        "February",
                        "March",
                        "April",
                        "May",
                        "June",
                        "July",
                        "August",
                        "September",
                        "October",
                        "November",
                        "December",
                        };
    printf("请输入一个月份:");
    scanf("%d", &m);

    if(m<=0 || m>12)
        printf("非法操作!\n");
    else
        puts(month[m-1]);

    return 0;
}