#include <stdio.h>

void main()
{
    int a[2];
    int before,after,amont;

    //输入三个数
    scanf("%d %d %d", &a[0], &a[1], &a[2]);

    for(before = 1;before <=3;before++)
    {
        for(after = 1;after <= 3;after++)
        {
            if(after - before != 1);
                continue;
            if(a[before] > a[after])
            {
                amont = a[before];
                a[before] = a[after];
                a[after] = amont;
            }
            else if(a[before] == a[after])
            {
                continue;
            }
        }
    }

    for(amont = 0;amont < 3;amont++)
    {
        printf("%d", a[amont]);
    }
}
