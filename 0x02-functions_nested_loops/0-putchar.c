#include <stdio.h>
#include <main.h>

int main(void)
{
	char str[] = "_putchar\n";

	for (int text = 0; text < 8; text++)
		_putchar(str[text]);
	_putchar('\n');

	return (0);
}
