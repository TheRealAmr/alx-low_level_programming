#include "main.h"

/**
 * get_bit - a function that returns the
 *           value of a bit at a given index
 * @n: unsigned int
 * @index: starting from 0 to the index u want to reach
 * Return: the value of the bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (n == 0 && index < 64)
		return (0);

	for (j = 0; j <= 63; n >>= 1, j++)
	{
		if (index == j)
			return (n & 1);
	}

	return (-1);
}
