#include <stdio.h>

void main()
{
    int num,temp = 2;
    scanf("%d", &num);

    while(temp != num)//ѭ��Ϊtemp��2һֱѭ����temp��num���
    {
        if(num % temp == 0)//��num����temp������Ϊ0��˵����������
        {
            printf("��������\n");
            break;//ֱ�ӽ��ѭ��
        }
        temp ++;
    }

//��1��Ϊ�˲���temp����num�������������������ᵼ��ѭ���˳�ʱnum����temp
    if(num % (temp-1) != 0)
        printf("����\n");

}
