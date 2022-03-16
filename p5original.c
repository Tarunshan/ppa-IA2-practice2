#include <stdio.h>
int input()
{
  int n;
  printf("Enter a number ");
  scanf("%d",&n);
  return n;
}

int gcd(int a,int b)
{
  int n,m;
  if (a>b)
  {
    n=b;
    b=a;
    a=n;
  }
  for (int i=2;a>=i;i++)
    {
      if (a%i==0 && b%i==0)
        m=i;
    }
  return m;
}

void output(int a,int b,int gcd)
{
  printf("The hcf of %d and %d is %d",a,b,gcd);
}

int main()
{
  int a,b,g;
  a=input();
  b=input();
  g=gcd(a,b);
  output(a,b,g);
  return 0;
}