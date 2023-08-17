#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 *
 * @n: input variable
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int post, space;

	if (n <= 0)
		_putchar('\n');
	for (post = 0; post < n; post++)
	{
		for (space = 0; space < post; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
