#include <stdio.h>

/**
 * main - entry point
 * Description: a program that prints all single digit numbers
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
