#include "main.h"

/**
 * _puts_recursion - prints a string
 * amr - prints letter by letter
 * @s: a string
 * Return: void
*/

void amr(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

void _puts_recursion(char *s)
{
	amr(s);
}
