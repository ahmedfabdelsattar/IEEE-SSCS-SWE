#include <stdio.h>
int sum_layers(int n)
{
  if (n == 0)
    return 0;

  return n + sum_layers(n - 1);
  n--;
}
int main()
{
  int n = 0;
  printf("enter the number\n");
  scanf("%d", &n);
  int result = sum_layers(n);
  printf("the sum is : %d\n", result);
}