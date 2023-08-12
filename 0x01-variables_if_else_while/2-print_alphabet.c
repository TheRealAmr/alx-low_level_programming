#include <stdio.h>

/**
 * main - entry point
 * Description: print the alphabet letters in lowercase
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
