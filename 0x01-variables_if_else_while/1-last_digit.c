#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine positive, negative and zero
 * Return: 0
 */
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit =n % 10;
printf("The last digitof %d is %d", n, n);
if (last_digit > 5)
printf("The last digit is %d is greater than 5\n", n);
else if (last_digit == 0)
printf("The last digit of %d is 0\n", n);
else if (last_digit < 6 && last_digit !=0)
printf("The last digit of %d is less than 6 and not 0\n", n);
return (0);
}
