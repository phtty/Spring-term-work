#include <stdio.h>
int main()
{
    struct Student
    {
        long int num;
        char name[20];
        char sex;
        char addr[20];
    }a={10101,"张强", 'F', "大学城南一路"};

    printf("student ID:%d\nname:%s\nsex:%c\naddress:%s", a.num, a.name, a.sex, a.addr);

    return 0;
}  
