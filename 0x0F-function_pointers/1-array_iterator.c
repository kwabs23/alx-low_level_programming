#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function on each element of an array
 * @array: array
 * @size: size of array
 * @action: function that is performed on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
