#include <stdio.h>
int manual_sizeof(int n)
{
    int *ptr1 = &n;
    int *ptr2 = (&n + 1);

    int size = (char *)ptr2 - (char *)ptr1;
    return size;
}
int main()
{

    int n = 0;
    int size = manual_sizeof(n);
    printf("%d\n", size);
}