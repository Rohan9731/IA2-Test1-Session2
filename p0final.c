
/*<br> 1.	Write a program to find the area of a triangle using following function signatures.
		<br> void input(float *base, float *height);
		<br> void find_area(float base , float height, float *area);
		<br> void output(float base, float height, float area);
		<br> input:
		<br> 1
		<br> 2
		<br> output:
		<br> the area of the traingle with base 1.000000 and height 2.000000 is 1.000000*/
		#include<stdio.h>
		void input( float *base,float *height)
		{
			printf("enter the base and height\n")
		;
		scanf("%f%f",base,height);
	
		}
		void calculate(float base,float height, float *area)
		{
			*area=0.5*base*height;
		}
		void output(float base,float height,float area)
		{
			printf("the area of given triangle of base %.2f and height of %.2f is %.2f",base,height,area);
		}
		int main()
		{ float x,y,z;
			input(&x,&y);
			calculate(x,y,&z);
			output(x,y,z);
			return 0;
		}