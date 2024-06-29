#include "main.h"

/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to print
 *
 * This function prints an integer, handling negative numbers and zero
 * appropriately, using only the _putchar function.
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}
