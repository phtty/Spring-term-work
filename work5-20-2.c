#include<stdio.h>

void main ()
{
    FILE *fp;

    char ch;

    if(NULL == (fp=fopen("resource\\temp.txt", "r")))
    {
        puts("Can't open file.");
        return;
    }

    while ((ch=fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
}
