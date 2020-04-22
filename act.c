//需要的参数：自机位置（x y）,最多50列的地图数组（map）,4个终点的位置（epx[4] epy[4]）

int _Act(int x, int y, char map[][50], int epx[4], int epy[4])
{
    int row;
    char key;

    while(1)
    {
        for(row=0;row<=10;row++)//打印迷宫 
        {
            puts(map[row]);
        }

        key=getch();//从用户处读入一个指令
        if(key=='s')//小人向下
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

        if(key=='w')//小人向上 
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

        if(key=='d')//小人向右 
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

        if(key=='a')//小人向左 
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

        if(map[epx[0]][epy[0]]=='@' && map[epx[1]][epy[1]]=='@' && map[epx[2]][epy[2]]=='@' && map[epx[3]][epy[3]]=='@')//胜利条件判定
            return 1;

        {//判断箱子是否到位，以下四个坐标如果检测到箱子，则会变成@
            if(map[epx[0]][epy[0]]=='O')//让箱子到指定位置是变成@
                map[epx[0]][epy[0]]='@'; 
            if(map[epx[1]][epy[1]]=='O') 
                map[epx[1]][epy[1]]='@'; 
            if(map[epx[2]][epy[2]]=='O') 
                map[epx[2]][epy[2]]='@'; 
            if(map[epx[3]][epy[3]]=='O') 
                map[epx[3]][epy[3]]='@';
        }

        if(map[epx[0]][epy[0]]!='@' && map[epx[0]][epy[0]]!='S')//让箱子指定位置时离开时恢复*号
            map[epx[0]][epy[0]]='*'; 
        if(map[epx[1]][epy[1]]!='@' && map[epx[1]][epy[1]]!='S') 
            map[epx[1]][epy[1]]='*'; 
        if(map[epx[2]][epy[2]]!='@' && map[epx[2]][epy[2]]!='S') 
            map[epx[2]][epy[2]]='*';
        if(map[epx[3]][epy[3]]!='@' && map[epx[3]][epy[3]]!='S') 
            map[epx[3]][epy[3]]='*';

        //判断用户是否需要结束或者重开
        if(key=='b')
            return 0;
        if(key=='r') 
            return -1;

        system("cls");

    }
}