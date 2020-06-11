#include <stdio.h>

int numjudge(void);

int main(void)
{
	(1==numjudge())?(printf("质数")):(printf("不是质数"));
	return 0;
}

int numjudge(void)
{
    int num,temp = 2,k;
    scanf("%d", &num);
    while(temp != num)
	{
        k = num % temp;
        if(k == 0)
            return 0;
		temp ++;
    }
    if(k != 0)
        return 1;
}