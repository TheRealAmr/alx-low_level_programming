#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the number
 *         of arguments passed into it
 *
 * @argc: integer
 * @argv: string value
 *
 * Return: 0 Success
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);

	return (0);
}
