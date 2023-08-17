#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \
 *     character should be printed
*/

void print_diagonal(int n)
{
	int x;
	int space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (space = 0; space <= x; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
