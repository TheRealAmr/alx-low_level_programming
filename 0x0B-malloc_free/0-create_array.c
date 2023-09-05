#include "main.h"
#include <stdlib.h>

/**
 * *create_array - a function that creates an array of chars
 *                 and initializes it with a specific char
 *
 * @size: size of the array
 * @c: specific char
 *
 * Return: If it fails or equal to zero NULL
 *         else return str
*/

char *create_array(unsigned int size, char c)
{
	char *str = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		str = (char *)malloc(sizeof(char) * size);

		if (str != NULL)
		{
			i = 0;

			while (i < size)
			{
				str[i] = c;
				i++;
			}
		}
	}

	return (str);
}
