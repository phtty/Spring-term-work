#include <stdio.h>

void main()
{
    int a = 3, b = 4, c = 5, x, y, j = 1;
    int temp[4];

    temp[0] = a + b > c && b == c;
    temp[1] = a || b + c && b - c;
    temp[2] = !(a > b) && !c || 1;
    temp[3] = !(x = a) && (y = b) && 0;
    temp[4] = !(a + b) + c - 1 && b + c / 2;

    for(int i = 0;i < 5;i++)
    {
        printf("(%d):%d\n", j, temp[i]);
        j++;
    }

}
