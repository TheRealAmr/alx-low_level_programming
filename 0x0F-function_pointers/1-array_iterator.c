#include "function_pointers.h"

/**
 * array_iterator - iterate via the  array
 *
 * @array: array to go through
 * @size: size of array
 * @action: action function to take
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		exit(98);

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
