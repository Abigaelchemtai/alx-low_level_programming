#include "stdio.h"
/**
 * main - prints a followed by new line
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/**
 * wrie your line of code here
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - not allowed to code anything on this line
 */
*(p + 5) = 98;
/* ..displays 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
