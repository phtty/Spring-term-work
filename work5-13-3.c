#include <stdio.h>

void main() 
{
    int i; 
    float f,sum; 

    for(i=1,sum=0.0;i<11;i++) 
    {
        scanf("%f", &f);
        sum += f;
    }

    printf("average=%f\n",sum/10.0);
} 


