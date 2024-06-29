#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times the character '_' will be printed
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('-');
		_putchar('\n');
	}
}
