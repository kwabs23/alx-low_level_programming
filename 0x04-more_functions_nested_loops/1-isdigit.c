#include "main.h"

/**
 * _isdigit - function that checks for 0 through 9
 * @c: parameter to be checked
 * Return: 1 if successful 0 if failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

