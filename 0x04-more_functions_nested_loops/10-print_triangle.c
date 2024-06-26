#include "main.h"

/**
 * print_triangle - Prints in the shape of a triangle
 * @size: the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= size - i)
					_putchar (' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
