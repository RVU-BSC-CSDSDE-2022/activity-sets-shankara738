#include <stdio.h>
int sum_func(int a, int b);
int sum_func(int a, int b)
{
  int  sum;
  sum = a + b;
  return(sum);
}

int main() {

  int a, b, sum;

  printf("Enter the first number:");
  scanf("%d", &a);

  printf("Enter the second number:");
  scanf("%d", &b);

  sum = sum_func(a,b);
  printf("%d", sum);

  return 0;
}
