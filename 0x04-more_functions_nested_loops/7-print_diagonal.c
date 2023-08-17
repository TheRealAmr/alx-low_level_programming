#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 * @n: input variable
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int x;
	int space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (space = 1; space <= n; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
