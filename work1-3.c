#include <stdio.h>

int main()
{
    int a, b, c, k;

    printf("������������\n");
    scanf("%d %d %d", &a, &b, &c);

    //A��B�Ƚ�
    if(a < b)//��aС��b�����b���
        k = b;
    else if(a == b)//�����ڣ���������һ��
        k = a;
    else
        k = a;

    if(a < c)//A��C�Ƚ�
        if(k < c)
            k = c;
    else if(a == c)
        if(k < a)
            k = a;
    else
        if(k < a)
            k = a;

    if(b < c)//B��C�Ƚ�
        if(k < c)
            k = c;
    else if(c == b)
        if(k < b)
            k = b;
    else
        if(k < b)
            k = b;

    printf("��������%d\n", k);

    return 0;
}
