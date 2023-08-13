#include <stdio.h>

/**
 * main - entry point
 * Description:  prints all the numbers of base 16 in lowercase
 * Return: 0 (Success)
*/

int main(void)
{
	char numbers = 0;
	char letters = 'a';

	while (numbers <= 9)
	{
		putchar(numbers);
		numbers++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}

	putchar('\n');
	return (0);
}
