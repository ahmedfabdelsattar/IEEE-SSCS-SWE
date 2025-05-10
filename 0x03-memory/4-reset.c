#include <stdio.h>

void access_one(int *x)
{
    *x += 1;
}
void access_two(int *x)
{
    *x += 1;
}
int main()
{
    int counter = 0;
    access_one(&counter);
    access_two(&counter);
    access_one(&counter);
    access_two(&counter);
    access_one(&counter);
    access_two(&counter);
    access_one(&counter);
    access_two(&counter);
    printf("%d\n", counter);
}