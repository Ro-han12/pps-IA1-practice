#include<stdio.h>
typedef struct _complex
{
  float real;
  float imaginary;
}complex;

complex input()
{
  complex t;
  printf("enter the real part: ");
  scanf("%f", &t.real);
  printf("enter the imaginary part: ");
  scanf("%f", &t.imaginary);
  return t;
}
complex add(complex a, complex b)
{
  complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary + b.imaginary;
  return sum;
}
void output(complex a, complex b, complex sum)
{
  printf("sum of %0.2f + %0.2fi and %0.2f + %0.2fi is %0.2f + %0.2fi",a.real,a.imaginary,b.real,b.imaginary, sum.real,sum.imaginary);
}
int main()
{
  complex  t1,t2,sum;
  t1=input();
  t2=input();
  sum=add(t1,t2);
  output(t1,t2,sum);
  return 0;
}