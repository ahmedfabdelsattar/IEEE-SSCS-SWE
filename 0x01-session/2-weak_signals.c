#include <stdio.h>

int is_strong_signal(int strength)
{

    if (strength > 50)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void check_signal(int strength)
{
    int x = is_strong_signal(strength);

    if (x == 1)
    {
        printf("strong signal detected\n");
    }
    else
    {
        printf("no signal detected\n");
    }
}
int main()
{
    int n = 0;

    printf("enter signal strength\n");

    scanf("%d", &n);

    check_signal(n);
}