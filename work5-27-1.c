#include <stdio.h>

int fun(int x, int y)
{  
	static int m=0, n=2;
    n+=m+1;
    m=n+x+y;
    return m;
}

void main(void)
{  
	int j=4, m=1, k;
    k=fun(j, m);
    printf ("%d,", k);
    k=fun(j, m);
    printf("%d\n", k);
}
