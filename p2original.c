#include<stdio.h>
int input()
{
  int a;
  printf("enter a number: ");
  scanf("%d",&a);
  return a;
}
int cmp(int a, int b, int c)
{
  if(a>b && a>c)
  return a;
  else if(b>a && b>c)
  return b;
  else
  return c;
  
}
void output(int big)
{
  printf("largest is %d",big);
  
}
int main()
{
  int a,b,c,big;
  a=input();
  b=input();
  c=input();
  big=cmp(a,b,c);
  output(big);
  return 0;
}
