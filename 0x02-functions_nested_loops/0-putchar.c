#include "main.h"

/**
 * main - entry point
 * Description: a program that prints _putchar
 * Return: 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";

	int text;
	for (text = 0; text < 8; text++)
		_putchar(str[text]);
	_putchar('\n');

	return (0);
}
