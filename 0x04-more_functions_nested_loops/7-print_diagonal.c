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

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
		{
			if (x > 1)
			{
				_putchar(' ' + 'n');
				_putchar('\');
			}
		}
		_putchar('\n');
	}
}
