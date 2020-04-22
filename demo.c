#include <stdio.h>
#include <windows.h>
#include <conio.h>

extern int _Act(int x, int y, char map[][50], int epx[4], int epy[4]);

int main(void)
{
    int y = 5, x = 4;

    int satu;

    int epx[4] = {1, 4, 4, 7};
    int epy[4] = {5, 2, 10, 6};

    char map[10][16]={"    ###       ",//1 
                    "    #*#       ",//2
                    "    # #       ",//3 
                    " ####O######  ",//4
                    " #* OS O  *#  ",//5
                    " #####O#####  ",//6 
                    "     # #      ",//7
                    "     #*#      ",//8 
                    "     ###      ",//9 
                    };
    again:;

    satu = _Act(x,y,map,epx,epy);

    if(satu == 1)
        printf("\n====YOU WIN====");
    else if(satu == -1)
        goto again;
    else
    printf("\nBack OVER");
    

    return 0;
}