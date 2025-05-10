#include <stdio.h>
#include <stdlib.h>
int x = 0;

int main()
{
    int y = 0;
    char *ptr1 = "hello world";
    int *ptr2 = (int *)malloc(4);
    printf(" %p: data -> %d\n", &x, x);
    printf(" %p: stack -> %d\n", &y, y);
    printf(" %p: heap -> %s\n", (void*)&ptr1, ptr1);
    printf(" %p: data -> %p\n",  (void*)&ptr2,  (void*)ptr2);
}