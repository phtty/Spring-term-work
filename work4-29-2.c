#include <stdio.h>
#include <conio.h>

int str(char *p);
//声明函数
int main(void)
{
    char stri[30];
    //读入一个字符串
    gets(stri);
    //调用str函数并打印长度
    printf("lenth = %d", str(stri));

    return 0;
}

int str(char *p)
{
    int n=0;
    //遍历字符串，每读入一个字符就将计数n加1
    while(*p!='\0')
    {
        n++;
        p++;
    }
    //返回最终计数值
    return n;
}