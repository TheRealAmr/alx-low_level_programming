#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9 skipping 2 and 4
 * Return: void
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + 48);
	}

	_putchar('\n');
}
