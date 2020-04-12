#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int j;
    char a[60][60]={"    ###       ",//1 
                    "    #*#       ",//2
                    "    # #       ",//3 
                    " ####O######  ",//4
                    " #* OSO   *#  ",//5 
                    " #####O#####  ",//6 
                    "     # #      ",//7 
                    "     #*#      ",//8 
                    "     ###      ",//9 
                    " 按下B键可退出 ",//10 
                    " 按下R键可重来 ",//11
                    };
    for(j=1;j<=12;j++)
        puts(a[j]);

    return 0;
}