#include "main.h"

/**
 * more_numbers - nmbr fct
 * Return: no return
 */

void more_numbers(void)
{
	int n;
	int mult;

	for (mult = 1; mult <= 10; mult++)
	{
		for (n = 0; n <= 14; n++)
  		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}

		_putchar(n  % 10 + '0');
		}

		_putchar('\n');
	}
	_putchar('\n');
}
