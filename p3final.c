
#include<stdio.h>
 int input_number()
 {
   int n;
   printf("enter the number\n");
   scanf("%d",&n);
   return n;
 }
	
 int is_composite(int n)
	{
    int i;
    int count=0;
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
    count=count+1;
    }
    if(count==2)
    {
    return 0;
    }
    else
    return 1;
  }
 void output(int n, int composite)
 {
 
 if(composite==0)
   printf("%d is not a composite number,it is a prime number\n",n);
   else 
   printf("%d is a composite number\n",n);
 }
int main()
{
  int n=input_number();
  int c= is_composite(n);
  output(n,c);
  return 0;
}

