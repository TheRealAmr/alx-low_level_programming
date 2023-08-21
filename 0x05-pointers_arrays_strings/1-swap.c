#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: pointer to 1st value
 * @b: pointer to 2nd value
 */

void swap_int(int *a, int *b)
{
	int amr;

	amr = *a;
	*a = *b;
	*b = amr;
}
