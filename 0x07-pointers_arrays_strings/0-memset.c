#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 *
 * @s: pointer to point the constant
 * @b: the constant
 * @n: max bytes to use
 *
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ch;

	for (ch = 0; n > 0; ch++, n--)
	{
		s[ch] = b;
	}

	return (s);
}
