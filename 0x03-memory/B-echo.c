#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int flag = 1;
    if (argv[1] == NULL)
    {
        printf("Silence. Nothing came through");
    }
    else
    {
        for (int i = 1; i < argc; i++)

        {

            if (strcmp(argv[i], "revelation") == 0 && flag == 1)
            {
                printf("A truth revealed: You are not alone.\n");
                flag = 0;
                continue;
            }

            printf("argc[%d]:%s\n", i, argv[i]);
        }
    }
}