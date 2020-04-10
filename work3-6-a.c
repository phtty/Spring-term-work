#include <stdio.h>

void main()
{
    int i;
    double lev1 = 0.1,lev2 = 0.075,lev3 = 0.05,lev4 = 0.03,lev5 = 0.015,lev6 = 0.01,reward;

    scanf("%d", &i);

    switch(i/100000)
    {
        case 0:
            reward = i*lev1;
            break;
        case 1:
            reward = (i-100000)*lev2 + i*lev1;
            break;
        case 2:
            reward = (i-200000)*lev3 + (i-100000)*lev2 + i*lev1;
            break;
        case 3:
            reward = (i-200000)*lev3 + (i-100000)*lev2 + i*lev1;
            break;
        case 4:
            reward = (i-400000)*lev4 + (i-200000)*lev3 + (i-100000)*lev2 + i*lev1;
            break;
        case 5:
            reward = (i-400000)*lev4 + (i-200000)*lev3 + (i-100000)*lev2 + i*lev1;
            break;
        case 6:
            reward = (i-600000)*lev5 + (i-400000)*lev4 + (i-200000)*lev3 + (i-100000)*lev2 + i*lev1;
            break;
        case 7:
            reward = (i-600000)*lev5 + (i-400000)*lev4 + (i-200000)*lev3 + (i-100000)*lev2 + i*lev1;
            break;
        case 8:
            reward = (i-600000)*lev5 + (i-400000)*lev4 + (i-200000)*lev3 + (i-100000)*lev2 + i*lev1;
            break;
        case 9:
            reward = (i-600000)*lev5 + (i-400000)*lev4 + (i-200000)*lev3 + (i-100000)*lev2 + i*lev1;
            break;
        default :
            reward = (i-1000000)*lev6 +(i-600000)*lev5 + (i-400000)*lev4 + (i-200000)*lev3 + (i-100000)*lev2 + i*lev1;
            break;
    }
    printf("%.3f", reward);
}
