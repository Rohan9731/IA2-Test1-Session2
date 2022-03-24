#include <stdio.h>
int input()
{
	int x;
	printf("enter the number\n");
	scanf("%d", &x);
	return x;
}
int gcd(int a, int b)
{
	int n,i;
	if (a > b)
		n = b;
	else
		n = a;
	for (i = n; i > 0; i--)
		if (a % i == 0 && b % i == 0)

			return i;
}
void output(int a, int b, int hcf)
{
	printf("the gcd of %d and %d is %d\n", a, b, hcf);
}
int main()
{
	int x, y, hcf;
	x = input();
	y = input();
	hcf = gcd(x, y);
	output(x, y, hcf);
	return 0;
}