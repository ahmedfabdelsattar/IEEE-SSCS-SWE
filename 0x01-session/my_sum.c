#include "fawzy.h"
#include <stdio.h>
int my_sum(int x)
{
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        int num = 0;

        scanf("%d", &num);
        num = my_abs(num);
        sum = sum + num;
    }
    return sum;
}