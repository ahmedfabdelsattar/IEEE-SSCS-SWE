
#include <unistd.h>

char my_putchar(char c)
{
    return write(1, &c, 1);
}
