#include "fawzy_man.h"
#include <stdio.h>
void my_alpha(char c)
{
    int asci = c;
    if ((asci >= 65 && asci <= 90) || (asci >= 97 && asci <= 122))
    {
        printf("it is letter");
    }
    else
    {
        printf("not letter");
    }
}

int main()
{
    printf("enter letter please\n");
    char c;
    scanf("%c", &c);
    my_alpha(c);
}