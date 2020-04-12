#include <stdio.h>

int main(void)
{
    int i = 1;
    char demo[5][5]={"abcd\n","abcd\n","abcd\n","abcd\n","abcd\n"};
    demo[2][3]='?';
    puts(demo[1]);

    return 0;
}
