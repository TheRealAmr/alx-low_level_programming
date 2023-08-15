#include "main.h"

/**
 * print_alphabet - using the _putchar function and prints from a to zx
*/

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
