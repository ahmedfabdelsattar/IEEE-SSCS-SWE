#include <unistd.h>
#include "fawzy.h"

void my_printer(int fd, char *c)
{
    for (int i = 0; c[i] != '\0'; i++)
    {
        write(fd, &c[i], 1);
    }
}
