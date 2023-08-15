#include "main.h"

/**
 * main - entry point
 * Description: a program that prints the alphabet
 * Return: 0 (Success)
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
