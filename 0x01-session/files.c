#include <stdio.h>
#include "fawzy.h"

int main()
{
    int y = 0;
    int temp = 0;
    char string[100];
    scanf("%s", string);

    int x = my_atoi(string);

    FILE *file;
    file = fopen("converted_num.txt", "w");
    if (x < 0)
    {
        my_putfile(file, '-');
        x = -x;
    }
    while (x > 0)
    {
        y = y * 10 + (x % 10);
        x /= 10;
        temp++;
    }
    for (int i = 0; i < temp; i++)
    {
        char z = (y % 10) + '0';
        y /= 10;
        my_putfile(file, z);
    }

    fclose(file);
}