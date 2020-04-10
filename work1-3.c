#include <stdio.h>

int main()
{
    int a, b, c, k;

    printf("请输入三个数\n");
    scanf("%d %d %d", &a, &b, &c);

    //A和B比较
    if(a < b)//若a小于b，则把b输出
        k = b;
    else if(a == b)//若等于，则随便输出一个
        k = a;
    else
        k = a;

    if(a < c)//A和C比较
        if(k < c)
            k = c;
    else if(a == c)
        if(k < a)
            k = a;
    else
        if(k < a)
            k = a;

    if(b < c)//B和C比较
        if(k < c)
            k = c;
    else if(c == b)
        if(k < b)
            k = b;
    else
        if(k < b)
            k = b;

    printf("最大的数是%d\n", k);

    return 0;
}
