#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * This function prints the numbers from 0 to 14, ten times in total
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}

}
