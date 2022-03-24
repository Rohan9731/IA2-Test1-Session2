#include<stdio.h>
           struct _triangle
           {
	          	float base,height,area;
           };
           typedef struct _triangle triangle;

           int input_n()
		   {
			   int n;
			   printf("enter the number of triangles\n");
			   scanf("%d",&n);
			   return n;
		   }
	       triangle input_triangle()

		   {
			   triangle t;
			   printf("enter the base and height of triangle\n");
			   scanf("%f%f",&t.base,&t.height);
			   return t;

		   }
           void input_n_triangles(int n, triangle t[n])
		   {
			   int i;
			   //printf("enter the base and height of given %.1f triangles\n",n);
			   for (i=0;i<n;i++)
			   {
				   t[i]=input_triangle();
			   }

		   }
           triangle find_area(triangle *t)
		   {//for (int i =0 ;i<n ;i++)
             int i;
			   t->area = 0.5 * t->base * t->height;
			   return *t;
		   }
	       void find_areas_n(int n, triangle t[n])
		   {
             int i;
			 for(i=0;i<n;i++)
			 {
				 t[i]=find_area(&t[i]);
               //t[i].area = t[i].base * t[i].height *0.5;
			 }
			 
		   }
           triangle find_smallest_triangle(int n, triangle t[n]) 
		   { int i,j; triangle s;
		  // s= t[0];
			   for (i = 1; i < n; i++)
	          {  for (j = 1; j < n; j++)
			           if ( t[i].area < t[j].area) 
		              s=t[i];
			  }
		   return s;
		   }
           void output(int n, triangle t[n], triangle smallest)
		   {int i;
			  printf("the height ,base and area of all triangles  is:\n");
			  for(i=0;i<n;i++)
			  {
				  printf(" the base %.2f,the height %.2f and the area is %.2f \n",t[i].base,t[i].height,t[i].area);
			  }
               printf("now the smallest traiangle is : \n %.2f of base and %.2f of height and  the area %.2f\n ",smallest.area,smallest.height,smallest.area);
			   //printf("this is the smallest area of triangle of height %.2f and base of %.2f is %.2f\n",smallest.base,smallest.height,smallest.area);
		   }
		   int main()
		   {
			   int n;triangle small;
			   n=input_n();
               //x=input_triangle();
			   triangle t[n];
			   input_n_triangles(n,t);
			   //find_area(&t);
			   find_areas_n(n,t);
			   small =find_smallest_triangle(n,t);
			   output(n,t,small);
			   return 0;
		   }