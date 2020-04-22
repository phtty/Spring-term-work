#ifndef _PB_ACTION_H
#define _PB_ACTION_H
#include <stdio.h>
#include <windows.h>
//需要的参数：自机位置,地图参数，终点位置

int _Act(int x,y;char map[][];)
{
    int sb, b;

    while(1)
    {
        for(b=0;b<=10;b++)//打印迷宫 
        {
            puts(map[b]);
        }

        sb=getch();//从用户处读入一个指令
        if(sb=='s')//小人向下
        {
            //不推箱子时实现向下
            if(map[x+1][y]!='#' && map[x+1][y]!='O' && map[x+1][y]!='@')
            { 
                map[x][y]=' '; 
                x++; 
                map[x][y]='S'; 
                goto node; //跳转到胜利条件判定处 
            }
            //推箱子时执行实现向下
            if(map[x+2][y]!='#' && map[x+1][y]=='O' && map[x+2][y]!='O' || (map[x+1][y]=='@' && map[x+2][y]!='#'))
            { 
                map[x][y]=' '; 
                x += 2;
                map[x][y]='O'; 
                x--; 
                map[x][y]='S'; 
            } 
        }

        if(sb=='w')//小人向上 
        {
            //不推箱子的时候实现向上 
            if(map[x-1][y]!='#' && map[x-1][y]!='O' && map[x-1][y]!='@') 
            { 
                map[x][y]=' '; 
                x--; 
                map[x][y]='S'; 
                goto node; //跳转到胜利条件判定处
            }
            //推箱子的时候实现向上
            if(map[x-2][y]!='#' && map[x-1][y]=='O' && map[x-2][y]!='O' || (map[x-1][y]=='@' && map[x-2][y]!='#')) 
            { 
                map[x][y]=' '; 
                x -= 2;
                map[x][y]='O'; 
                x++; 
                map[x][y]='S'; 
            } 
        }

        if(sb=='d')//小人向右 
        {
            //不推箱子实现向右
            if(map[x][y+1]!='#' && map[x][y+1]!='O' && map[x][y+1]!='@') 
            { 
                map[x][y]=' '; 
                y ++ ; 
                map[x][y]='S'; 
                goto node; //跳转到胜利条件判定处
            }
            //推箱子时实现向右
            if(map[x][y+2]!='#' && map[x][y+1]=='O' && map[x][y+2]!='O' || (map[x][y+1]=='@' && map[x][y+2]!='#')) 
            {
                map[x][y]=' '; 
                y+=2; 
                map[x][y]='O'; 
                y--; 
                map[x][y]='S'; 
            } 
        }

        if(sb=='a')//小人向左 
        { 
            if(map[x][y-1]!='#' && map[x][y-1]!='O' && map[x][y-1]!='@') 
            { 
                map[x][y]=' '; 
                y--; 
                map[x][y]='S'; 
                goto node; //跳转到胜利条件判定处
            } 
            if(map[x][y-2]!='#' && map[x][y-1]=='O' && map[x][y-2]!='O' || (map[x][y-1]=='@' && map[x][y-2]!='#')) 
            { 
                map[x][y]=' '; 
                y-=2;
                map[x][y]='O'; 
                y++; 
                map[x][y]='S'; 
            } 
        }

        node:;//胜利条件判定

        if(map[1][5]=='@' && map[4][2]=='@' && map[4][10]=='@' && map[7][6]=='@')//胜利条件判定
            break;

        {//判断箱子是否到位，以下四个坐标如果检测到箱子，则会变成@
            if(map[1][5]=='O')//让箱子到指定位置是变成@
                map[1][5]='@'; 
            if(map[4][2]=='O') 
                map[4][2]='@'; 
            if(map[4][10]=='O') 
                map[4][10]='@'; 
            if(map[7][6]=='O') 
                map[7][6]='@';
        }

        if(map[1][5]!='@' && map[1][5]!='S')//让箱子指定位置时离开时恢复*号
            map[1][5]='*'; 
        if(map[4][2]!='@' && map[4][2]!='S') 
            map[4][2]='*'; 
        if(map[4][10]!='@' && map[4][10]!='S') 
            map[4][10]='*';
        if(map[7][6]!='@' && map[7][6]!='S') 
            map[7][6]='*';

        //判断用户是否需要结束或者重开
        if(sb=='b')
            return "end";
        if(sb=='r') 
            return "again";

        system("cls");

    } 
}

#endif