#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates
 *                  memory using malloc
 *
 * @b: allocated memory integer
 *
 * Return: void
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *bb = NULL;

	unsigned int temp = b;
	unsigned int size = 0;

	while (temp != '\0')
	{
		size = size + 1;
		temp = temp + 1;
	}

	bb = malloc(sizeof(int) * size);

	if (bb != NULL)
	{
		b = bb;
		return (b);
	}
	else
	{
		exit(98);
	}
}
