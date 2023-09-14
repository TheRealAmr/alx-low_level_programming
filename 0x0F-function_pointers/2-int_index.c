#include "function_pointers.h"

/**
 * int_index - indexes the array
 *
 * @array: array to go through
 * @size: size of array
 * @cmp: function todo something with size
 *
 * Return: value of int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
