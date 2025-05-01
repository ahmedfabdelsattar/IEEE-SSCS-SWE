#include <stdio.h>
#include "fawzy.h"
int my_counter(char *c)
{
    int count = 0;
    int word = 0;

    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] != ' ' && word == 0)
        {
            word = 1;
            count++;
        }
        else if (c[i] == ' ')
        {
            word = 0;
        }
    }

    return count;
}
