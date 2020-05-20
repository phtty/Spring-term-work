#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#include "cJSON\cJSON.h"

#define CP "resource\\CP_IMFO.json"
#define BUFSIZE 256

int main()
{
    FILE *level_IMFO;

    int epx[10] = {0},
        epy[10] = {0};

    char Map[100][100],
         buf[256],
         cp[2048]={0};

    level_IMFO = fopen(CP, "r");
    if(NULL == level_IMFO)
    {
        printf("FILE OPEN FAULT!");
        return -1;
    }

    while(fgets(buf, BUFSIZE, level_IMFO))
        strcat(cp,buf);

    cJSON *root = NULL, *checkpoint = NULL, *map = NULL,
          *self_position = NULL, *end_position = NULL;
    root = cJSON_Parse(cp);
    if(!root)
        printf("Error before: [%s]\n",cJSON_GetErrorPtr());
    else
    {
        checkpoint = cJSON_GetObjectItem(root, "checkpoint_1");
        map = cJSON_GetObjectItem(checkpoint, "map");
        self_position = cJSON_GetObjectItem(checkpoint, "self_position");
        end_position = cJSON_GetObjectItem(checkpoint, "end_position");
        

    }

    return 0;
}