#include <stdio.h>
#include <math.h>

void main()
{
    int num, temp = 0, i;
    double res[3];

    for(num = 100;num < 1000;num++)
    {
        i = num;//��i����num�������㣬����ѭ������
        while(i != 0)//�Ӹ�λѭ�������λ����
        {
            res[temp] = i % 10;//��ȡ������ʮ����������ʵ������������ĸ�λ��
            i = i / 10;//���������Сʮ����ͬʱ���������Σ�С�����ֽ���ȥ
            temp++;
        }
        //�ж��Ƿ�Ϊˮ�ɻ���
        if(num == pow(res[0],3) + pow(res[1],3) + pow(res[2],3))
            printf("num = %d\n", num);
        //����temp���������´�ѭ����ʼʱ��ʼֵΪ 0
        temp = 0;
    }
}
