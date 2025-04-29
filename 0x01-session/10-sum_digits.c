#include <stdio.h>

int sum_digits(int n, int *size)
{
    if (n == 0) return 0;
    
    (*size)++;
    return n % 10 + sum_digits(n / 10, size);
}
int main()
{
    int n = 0;
    int size = 0;
    scanf("%d", &n);
    int result = sum_digits(n, &size);
    printf("%d\n %d\n", result, size);
}