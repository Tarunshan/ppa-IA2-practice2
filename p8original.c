#include <stdio.h>
typedef struct triangle
{
  float base,altitude,area;
}triangle;

int input_n()
{
  int n;
  printf("Enter no.of triangles ");
  scanf("%d",&n);
  return 0;
}

triangle input_triangle()
{
  triangle t;
  printf("Enter base and altitude of the triangle ");
  scanf("%f%f",&t.base,&t.altitude);
  return t;
}

void input_n_triangles(int n,triangle t[n])
{
  triangle a;
  for (int i=0;n>i;i++)
    {
      a=input_triangle();
      t[i]=a;
    }
}

void find_area(triangle *t)
{
  t->area=0.5*(t->base)*(t->altitude);
}

void find_areas_n(int n,triangle t[n])
{
  for (int i=0;n>i>i++)
    {
      find_area(&t[i]);
      
    }
}