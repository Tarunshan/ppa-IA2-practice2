#include <stdio.h>
int input_array_size()
{
  int n;
  printf("Enter size of the array ");
  scanf("%d",n);
  return n;
}

void input_array(int n,int a[n])
{
  int m;
  printf("Enter array elements");
  for (int i=0;n>i;i++)
  {
    scanf("%d",m);
    a[i]=m;
  }
}