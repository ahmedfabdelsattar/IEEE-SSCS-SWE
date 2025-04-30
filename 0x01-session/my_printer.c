#include <unistd.h>
#include "fawzy.h"

void my_printer(char *c)
{
    for (int i = 0; c[i] != '\0'; i++)
    {
        write(1, &c[i], 1);
    }
}
