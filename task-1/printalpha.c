#include <stdio.h>
#include "fawzy_man.h"
int main()
{

    for (int i = 97; i <= 122; i++)
    {
        my_putchar(i);
    }
    for (int i = 90; i >= 65; i--)
    {
        if (i == 79)
        {
            continue;
        }

        my_putchar(i);
    }
}