#include <stdio.h>

char *get_reply()
{
    return "hello\n";
}

int main()
{
    char *reply = get_reply();
    printf("%s", reply);
}