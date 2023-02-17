#include <stdlib.h>
#include <time.h>
/**
 * main - Determine positive, negative and zero
 * Return: 0
 */
int main(void)
{
<<<<<<< HEAD
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
=======
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is zero\n", n);
	return (0);
>>>>>>> 7e317cb7286c0cb372ed268d7377996b12be4280
}
