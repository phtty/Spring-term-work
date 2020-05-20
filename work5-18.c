#include <stdio.h>
#define BUFSIZE 128

int main()
{
    FILE *fr;
    char buf[BUFSIZE];

    //尝试打开文件
    fr = fopen(".\\resource\\temp.txt","r");
    //异常处理及反馈
    if(NULL == fr)
    {
        printf("FILE OPEN FAULT");
        return -1;
    }
    //打印文件内的内容
    while(fgets(buf, BUFSIZE, fr))
        printf("%s", buf);

    return 0;
}
