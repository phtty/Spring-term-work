#include <stdio.h>

void str_m(int n, char *p, char *c);
int main(void)
{
    int num;
    char str[20] /*待拷贝的字符串*/, cop[20]/*拷贝出来的字符串*/;

    printf("请输入字符串：\n");
    gets(str);
    printf("您希望从第几个字符开始拷贝？\n");
    scanf("%d", &num);

    str_m(num, str, cop);
    printf("%s",cop);
    return 0;
}
void str_m(int n, char *p, char *c)
{
    p += n-1;
    //拷贝的字符行首忽略空格
    while(*p == ' ')
        p++;
    //遍历第m个字符之后的字符，并复制到另一个字符串中
    while(*p != '\0')
    {
        *c = *p;

        c++;
        p++;
    }
}