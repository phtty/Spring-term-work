#include <stdio.h>

void main()
{
    int num, temp = 0, res[4], cort = 0;
    scanf("%d", &num);

    while(num != 0)//�Ӹ�λѭ�������λ����
    {
        res[temp] = num % 10;//��ȡ������ʮ����������ʵ������������ĸ�λ��
        num = num / 10;//���������Сʮ����ͬʱ���������Σ�С�����ֽ���ȥ
        temp++;//λ����������һλ��1
    }
    printf("The number is a %d digits\n", temp);

    printf("And the number's reverse oder is:");

    while(cort != temp)//ѭ�������洢����
    {
        printf("%d", res[cort]);
        cort ++;
    }
    printf("\n");

}
