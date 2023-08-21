#include "main.h"

/**
 * reset_to_98 - updates the value of the
 * variable the pointer points to to 98
 *
 * @n: pointer to the variable to update
*/

void swap_int(int *a, int *b)
{
	int amr;

	amr = *a;
	*a = *b;
	*b = amr;
}
