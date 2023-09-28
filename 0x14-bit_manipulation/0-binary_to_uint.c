#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that converts a binary
 *                  number to an unsigned int
 * @b: string
 * Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int xyz;
	int length, secondbase;

	if (!b)
		return (0);

	xyz = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, secondbase = 1; length >= 0; length--, secondbase *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			xyz += secondbase;
		}
	}

	return (xyz);
}
