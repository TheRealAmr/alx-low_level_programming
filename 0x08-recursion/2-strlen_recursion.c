#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: a string
 * Return: void
*/

int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		return (n);
	}
	else
	{
		n = n + 1;
		_puts_recursion(s + 1);
	}
}
