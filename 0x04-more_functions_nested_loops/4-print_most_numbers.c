#include "main.h"

/**
 * print_most_numbers - prints
 * Return: void
*/

void print_most_numbers(void)
{
        char n;

        for (n = 48; n < 58; n++)
        {
		if (n == 2 && n == 4)
		{
			_putchar(n);
		}
	}

        _putchar('\n');
}
