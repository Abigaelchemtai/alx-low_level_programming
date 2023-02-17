#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Determine positive, negative and zero
 * Return: 0
 */
int main(void)
{
	int n
	srand(time (0));
	n=rand()_RAND_MAX/2;
	if(n>0)
	{
		printf("%d is possible \n" ,n);
	}
	else if(n==0)
	{
                printf("%d is zero \n" ,n);
	}
	else
	{
		printf("%d is zero \n" ,n);
	}
	return (0);
}
