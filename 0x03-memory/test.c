#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];

    int age;
};
int main()
{

    struct student *kevin;
    kevin = malloc(sizeof(struct student));
    kevin->name = "ahmed";

    printf("%s", kevin->name);
}
