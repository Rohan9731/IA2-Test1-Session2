#include<stdio.h>
#include<math.h>
int input_side()
{
  float side;
  printf("enter the side of a triangle\n");
  scanf("%f",&side);
  return side;
}
int check_scalene(int a, int b, int c)
{
    float s,area;
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    return area;

}
 void output(int a, int b, int c, int isscalene)
 {
   printf("the area of given triangle of sides %d,%d,%d  is %d \n",a,b,c,isscalene);
 }
 int main()
 {
   int a,b,c,scalene;
   a=input_side();
   b=input_side();
   c=input_side();
   check_scalene(a,b,c);
   output(a,b,c,scalene);
 }