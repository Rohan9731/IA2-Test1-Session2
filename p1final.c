#include<stdio.h>
int input(float *base, float *height)
{
  printf("enter the base and height of the numbers\n");
  scanf("%f%f",base,height);
  return 0;

}
void find_area(float base , float height, float *area)
{
  *area=0.5 * base * height;
}
void output(float base, float height, float area)
{
  printf("the area pf the trianagle having base %f and height %f is %f\n",base,height,area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}