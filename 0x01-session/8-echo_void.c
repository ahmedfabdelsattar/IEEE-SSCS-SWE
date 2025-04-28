#include <stdio.h>
void echo(int n)
{
    if (n == 0)
    {
    }
    else
    {
        printf("%d:echo\n", n);

        n = n - 1;
        echo(n);
    }
}

int main()
{
    int n = 0;
    printf("enter how many times u want the sound to echo\n");
    scanf("%d", &n);
    echo(n);
    return 0;
}