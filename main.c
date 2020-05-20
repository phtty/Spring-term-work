#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

#include "cJSON\cJSON.h"
#include "cJSON\cJSON.c"

#define CP "resource\\CP_IMFO.json"
#define BUFSIZE 256

int main()
{
    FILE *level_IMFO;

    int epx[10] = {0},epy[10] = {0},
        spx, spy;

    char Map[100][100], buf[256], cp[2048]={0};//初始化可能用到的变量

    system("cls");//！！！！调试用！！！！

    level_IMFO = fopen(CP, "r");//打开关卡信息文件
    if(NULL == level_IMFO)//打开异常处理
    {
        printf("FILE OPEN FAULT!");
        return -1;
    }

    while(fgets(buf, BUFSIZE, level_IMFO))//把关卡信息文件字符串化，以便后续解析
        strcat(cp,buf);

    cJSON *root = NULL, *checkpoint = NULL, *map = NULL,
          *self_position = NULL, *end_position = NULL,
          *mapline = NULL, *ep = NULL, *ep_v = NULL;//初始化cJSON变量
    root = cJSON_Parse(cp);//解析json文本
    if(!root)//异常处理，返回错误代码
        printf("Error before: [%s]\n", cJSON_GetErrorPtr());

    else
    {
        checkpoint = cJSON_GetObjectItem(root, "checkpoint_1");
        map = cJSON_GetObjectItem(checkpoint, "map");
        self_position = cJSON_GetObjectItem(checkpoint, "self_position");
        end_position = cJSON_GetObjectItem(checkpoint, "end_position");
        //逐级解析关卡信息

        //从关卡信息中获取地图信息，并保存到Map二维数组中
        int temp = 0, mapsize;
        mapsize = cJSON_GetArraySize(map);
        for(; temp < mapsize; temp++)
        {
            mapline = cJSON_GetArrayItem(map, temp);
            strcpy(Map[temp], mapline->valuestring);
            puts(Map[temp]);
        }

        //从关卡信息中获取自机位置并保存到spx和spy中
        spx = (cJSON_GetArrayItem(self_position, 0))->valueint;
        spy = (cJSON_GetArrayItem(self_position, 1))->valueint;

        //从关卡信息中获取终点位置并保存到epx和epy数组中
        int EPsize;
        EPsize = cJSON_GetArraySize(end_position);
        for(temp = 0; temp < EPsize; temp++)
        {
            ep = cJSON_GetArrayItem(end_position, temp);
            ep_v = cJSON_GetArrayItem(ep, 0);
            epx[temp] = ep_v->valueint;
            ep_v = cJSON_GetArrayItem(ep, 1);
            epy[temp] = ep_v->valueint;
        }

    }

    return 0;
}