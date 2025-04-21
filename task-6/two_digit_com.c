#include <stdio.h>
#include "fawzy_man.h"
int main()
{

    for (int i = 0; i <= 9; i++)
    {
        for (int j = i + 1; j <= 9; j++)
        {

            if (i == j)
            {
                continue;
            }
            my_putchar(i + '0');
            my_putchar(j + '0');
            my_putchar(',');
        }
    }
}