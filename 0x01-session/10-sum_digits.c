#include <stdio.h>
int sum_digits(long long int n)
{
    if (n < 0)
        n = -n;
    if (n == 0)
        return 0;
    return n % 10 + sum_digits(n / 10);
}
int main()
{
    long long int n=0;
    printf("enter ur number\n");
    scanf("%lld",&n);
    int sum=sum_digits(n);
    printf("%d\n",sum);
}