#include <stdio.h>
int count_one = 0;
int count_two = 0;
void access_one(int *x, int *y)
{
    *x += 1;
    *y += 1;
}
void access_two(int *x, int *y)
{
    *x += 1;
    *y += 1;
}
int main()
{
    int counter = 0;
    access_one(&counter, &count_one);
    access_two(&counter, &count_two);
    access_one(&counter, &count_one);
    access_two(&counter, &count_two);
    access_one(&counter, &count_one);
    access_two(&counter, &count_two);
    access_one(&counter, &count_one);
    access_two(&counter, &count_two);
    printf("both fuctions has been called %d times\n", counter);
    printf("first fuction has been called %d times\n", count_one);
    printf("second fuction has been called %d times\n", count_two);
}