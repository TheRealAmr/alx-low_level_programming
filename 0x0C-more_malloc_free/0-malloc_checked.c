#include "main.h"
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
	void *bb;

	/* unsigned int temp = b; */
	/* int size = 0; */

	/* while (temp != '\0') */
	/*{ */
	/*	size = size + 1; */
	/*	temp = temp + 1; */
	/*} */

	/* bb = malloc(sizeof(int) * size + 1); */
	bb = malloc(b);

	if (bb == NULL)
		exit(98);
	return (bb);

}
