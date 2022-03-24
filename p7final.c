	#include<stdio.h>
	 struct _triangle
 {
	
	float base,altitude,area;
	 };
typedef struct _triangle Triangle;
	 Triangle input_triangle()
	 {
		Triangle x;
		printf("enter the base and height\n");
		scanf("%f %f",&x.base,&x.altitude);
		return x;
	 }
	 void find_area(Triangle *t)
	 {
		 t->area= 0.5* t->base * t->altitude;

	 }
	 void output(Triangle t)
	 {
	 printf("the area of given triangle of height %.2f and base %.2f is %.2f\n",t.altitude,t.base,t.area);
	 }
	 int main(void)
	 {Triangle x;
	 x=input_triangle();
	 find_area(&x);
	 output(x);
	 return 0;
       
	 }