#include "main.h"

/**
 * _isupper - check if c is uppercase letter
 * @c: Input for the alphabet
 * Return 1 if uppercase, and 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
