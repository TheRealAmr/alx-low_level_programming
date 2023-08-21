#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
