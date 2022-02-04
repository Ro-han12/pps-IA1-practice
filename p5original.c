#include<stdio.h>
float input()
{
  int n;
  printf("enter number to find sqrt: ");
  scanf("%d",&n);
  return n;
}
float my_sqrt(float n)
{
  float sqrt,t;
  t=0;
  sqrt=n/2;
  while(sqrt!=t)
  {
    t=sqrt;
    sqrt=((n/t)+t)/2;
  }
  return sqrt;
}
void output(float n, float sqrt_result)
{
  printf("sqrt of %.3f is  %.3f",n,sqrt_result);

}
int main()
{
  int n,sqrt;
  n=input();
  sqrt=my_sqrt(n);
  output(n,sqrt);
  return 0;
}