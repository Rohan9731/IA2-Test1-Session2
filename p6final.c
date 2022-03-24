#include <stdio.h>
int input_size()
{
	int x;
	printf("enter the number\n");
	scanf("%d", &x);
	return x;
}
void input_array(int n, int a[n])
{
	printf("enter the elments \n");
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}
int sum_composite(int n, int a[n])
{
	int i, j = 1, sum = 0, count = 0, great = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n; j++)
		
			if (a[i] > a[j])
			//continue;
		
		great=a[i];
	}
	for (i = 0; i < n; i++)
	{
		for (j = 1; j < great; j++)

		{ 
      if(a[i]<=j)
			  if (a[i] % j == 0)
				count += 1;
		}
		if (count >=3){
			sum = sum + a[i];
		}
	}
	return sum;
}
void output(int sum)
{
	printf(" the sum  of composite numbers is %d", sum);
}
int main()
{
	int x;
	x = input_size();
	int a[x];
	int total;
	input_array(x, a);
	total = sum_composite(x, a);
	output(total);
	return 0;
}