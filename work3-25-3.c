#include <stdio.h>
#include <math.h>

void main()
{
    int num, temp, sum;

    for(num = 1;num < 1000;num++)
    {
        sum = 0;//ÿ��ѭ��ǰ��ʼ��sum
        //����һ���numС1������1������
        for(temp = num-1;temp >= 1;temp--)
        {
            if(num % temp == 0)//���num������������������Ϊ�㣬��ô���
            {                  //���϶���num������
                sum = sum + temp;//��������ۼӵ�sum��
            }
        }
       // printf("%d\n",sum);
        if(num == sum)//��num���������Ӻ�sum���Ƚϣ������ȣ�˵���ҵ���
        {
            printf("%d:its factors are ", num);
            //�ظ�һ��֮ǰ�����ӵĹ����������������
            for(temp = num-1;temp >= 1;temp--)
            {
                if(num % temp == 0)
                    printf("%d ", temp);
            }
            printf("\n");
        }
    }



}
