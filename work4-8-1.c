 #include <stdio.h>

 void main()
 {
    int num[10], temp, mid, x;
    //ѭ������10������
    for(temp=0;temp<10;temp++)
    {
        scanf("%d", &x);
        num[temp] = x;
    }
    //����10������������

    int i, j;

    for(i=0;i<=8;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(num[i] < num[j])
            {
                mid = num[j];
                num[j] = num[i];
                num[i] = mid;
            }
        }
    }
    //��������ĵ�һ����
    printf("%d", num[0]);

 }


