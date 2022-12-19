#include <math.h>
double input();
double square_root(double n);
void output(double n, double sqrroot);

int main()
{
  double n = input();
  double sq = square_root(n);
  output(n,sq);
  }
double input()
{
  double a;
  printf("Enter a number");
  scanf("%if",&a);
  return(a);
}
double input()
{
  int x=n;
  int y=1;
  while (x>y){
    x = (x + y)/2;
    y = n/x;
   }
  return x;
}

void output(double n,double sqrroot)
{
  printf("square root of %2.2If is %2.4If",n,sqrroot);
}
