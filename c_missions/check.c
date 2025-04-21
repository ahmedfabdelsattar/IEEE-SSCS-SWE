#include <stdio.h>
void iseven(int n)
{
    if (n % 2 == 0)
    {
        printf("num is even\n");
    }
    else
    {
        printf("num is odd\n");
    }
}
void lastnum(int n)
{

    int num = n % 10;
    if (num < 0)
    {
        num = 0 - num;
    }
    if (num < 5)
    {
        printf("num is less than 5\n");
    }
    else
    {
        printf("num is greater than 5\n");
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", n);
    iseven(n);
    lastnum(n);
    return 0;
}