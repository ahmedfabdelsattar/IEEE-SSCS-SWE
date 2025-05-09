#include <stdio.h>
void status(int n)
{
    if (n > 0)
    {
        printf("positive");
    }
    else if (n < 0)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }
}
int main(){
    int n=0;
    scanf("%d",&n);
    void (*ptr) (int)=&status;
    ptr(n);
}