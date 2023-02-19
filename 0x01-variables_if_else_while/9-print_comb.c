#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0 (success)
 */
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9' ; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

