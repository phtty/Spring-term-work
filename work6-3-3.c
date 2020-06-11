#include <stdio.h>

int main(void)
{
    int ul=0,ll=0,nu=0,sp=0,an=0;
    char str[50],*p;
    p = str;
    gets(str);

    while(*p != '\0')
    {
        if(*p >= 'A' && *p <= 'Z')
            ul++;
        else if(*p >= 'a' && *p <= 'z')
            ll++;
        else if(*p >= '0' && *p <= '9')
            nu++;
        else if(*p == ' ')
            sp++;
        else
            an++;
        p++;
    }


    printf("大写：%d;小写：%d;数字：%d;空格：%d;其他：%d", ul, ll, nu, sp, an);
    return 0;
}