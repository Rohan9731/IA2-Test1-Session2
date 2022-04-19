/*   6.	Write a program to reverse a string.
	   void input_string(char *a);
	   char *str_reverse(char *a);
	   void output(char *a,char *reversea);
	   input:
	   hello
	   output:
	   olleh*/
#include <stdio.h>
void input_string(char *a)
{
	printf("enter the word\n");
	scanf("%s", a);
}
int str_reverse(char *a)
{
	int wordcount = 0;
	for (int i = 0; a[i] != '\0'; i++)
	wordcount++;
	
	return wordcount;
}
void output( char *a, int  reverse )
{
  int i,j;
	printf(" the given character is: ");
	for (i = 0; a[i] != '\0'; i++)
	
	printf("%c ", a[i]);
	
	printf("\n the reverse of the given character is: ");
     for (j= reverse-1; a[j] != '\0';j--)
	 
		 printf("%c ",a[j]);
}
int main()
{
	char a[100];
	input_string(a);
	int  x;
	x = str_reverse(a);
	output(a,x);
	return 0;
}
