#include <stdio.h>

void main()
{
    float grade;
    char level;

    scanf("%f", &grade);

    if(grade < 60 && grade >= 0)
        level = 'E';
    else if(grade >= 60 && grade < 70)
        level = 'D';
    else if(grade >= 70 && grade < 80)
        level = 'C';
    else if(grade >= 80 && grade < 90)
        level = 'B';
    else if(grade >= 90 && grade <= 100)
        level = 'A';
    else
        level = 'X';

    printf("%c", level);
}
