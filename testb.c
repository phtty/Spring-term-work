#include "stdio.h"

int main(void)
{
    int a[10], i;

    for(i=0; i<10; scanf("%d",a+i++));
    	for(i=0; i<10; i++)
    	    if(a[i]==3)
			{
        	    printf("Yes, it is %d input\n",i+1);
        	    break;
        	}

    if(i==10)
        printf("Didn't find 3\n");
    return 0;
}

