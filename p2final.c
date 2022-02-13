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
  if(a!=b && a!=c && b!=c)
  return 0;
  else 
  if(a==b && a==c && b==c)
  return 1;
else 
return 2;
}
 void output(int a, int b, int c, int isscalene)
 {
   if(isscalene==0)
   printf("the given triangle of sides %d,%d,%d  is scalene triangle\n",a,b,c);
   else
   if(isscalene==1)
    printf("the given triangle of sides %d,%d,%d  is a equilaternal triangle\n",a,b,c);
    else
     printf("the given triangle of sides %d,%d,%d  is isoceles triangle\n",a,b,c);
 }
 int main()
 {
   int a,b,c,scalene;
   a=input_side();
   b=input_side();
   c=input_side();
   scalene=check_scalene(a,b,c);
   output(a,b,c,scalene);
 }