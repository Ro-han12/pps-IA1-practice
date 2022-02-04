#include<stdio.h>
int input()
{
  int n;
  printf("enter the number: ");
  scanf("%d",&n);
  return n;
}
int sum(int n)
{
  int sum=0;
  for(int i=0;i<=n;i++)
  {
    sum=sum+i;
  }
   return sum;
}
void output(int n,int sum)
{
  printf("sum is %d",sum);
}
int main()
{
  int n,su;
  n=input();
  su=sum(n);
  output(n,su);
  return 0;
}

