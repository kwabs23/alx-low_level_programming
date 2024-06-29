#include <stdio.h>

/**
 * main - Entry point
 *
 * This program finds and prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long num = 612852475143;
	long factor = 2;
	long largest_factor = 0;

		while (num > 1)
	{
		if (num % factor == 0)
	{
		largest_factor = factor;
			while (num % factor == 0)
		{
			num /= factor;
		}
	}
		factor++;
	}

	printf("%ld\n", largest_factor);
	return (0);
}

