#include <stdio.h>
#include <stdlib.h>

struct emp {
    int id;
    char name[10];
    int age;
};

struct emp e1;

int main()
{
    printf("enter your id :");
    scanf("%d",&e1.id);
    printf("enter your name :");
    scanf("%s",&e1.name);
    printf("enter your age :");
    scanf("%d",&e1.age);

    printf("%d , %s , %d",e1.id,e1.name,e1.age);
    return 0;
}
