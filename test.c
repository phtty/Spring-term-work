#include <stdio.h>

int main(void)
{
    int a[6][6], i, j;

    for (i=1;i<6;i++)
        for (j=1 ;j<6 ;j++)
            a[i][j]=(i/j)*(j/i);

    for (i=1;i<6;i++)
    { 
        for (j=1 ;j<6 ;j++)
            printf("%2d",a[i][j]);
        printf("\n");
    } 

    return 0;
}
