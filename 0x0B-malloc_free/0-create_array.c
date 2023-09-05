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
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

	i = 0;

	while (i < size)
	{
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			if (size == 0)
			{
				return (NULL);
			}
			else
			{
				while (i < size)
				{
					str[i] = c;
					i++;
				}

				if (str == NULL)
				{
					free(str);
					return (NULL);
				}
				else
				{
					free(str);
				}
			}
		}
	}

	return (str);
}
