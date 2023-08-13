#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = '0';

	while (digit <= 9)
	{
		putchar(digit);
		putchar(',');
		putchar(' ');
		digit++;
	}

	return (0);
}
