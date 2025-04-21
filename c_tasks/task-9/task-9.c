#include <stdio.h>
#include "fawzy_man.h"

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 15 || n < 0)
    {
    }
    else
    {
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                int k = j * i;
                if (k < 10)
                {
                    my_putchar(k + '0');
                    my_putchar(',');
                    my_putchar(' ');
                }
                else if (k < 100)
                {
                    int x = k % 10;
                    k = k / 10;
                    my_putchar(k + '0');
                    my_putchar(x + '0');
                    my_putchar(',');
                    my_putchar(' ');
                }
                else
                {
                    int y = (k % 100) / 10;
                    int x = k % 10;
                    k = k / 100;
                    my_putchar(k + '0');
                    my_putchar(y + '0');
                    my_putchar(x + '0');
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
            my_putchar('\n');
        }
    }
}