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
printf("The last digit of %d is %d", n, last_digit
if (last_digit > 5)
printf("and is greater than 5");
else if (last_digit == 0)
<<<<<<< HEAD
printf("The last digit of %d is 0\n", n);
else
printf("The last digit of %d is less than 6 and not 0\n", n);
=======
printf("and is 0");
else if (last_digit < 6 && last_digit !=0)
printf("and less than 6 and not 0");
printf("\n");
>>>>>>> 13f643ae93cfa933877edd8f53a59890fbc22a38
return (0);
}
