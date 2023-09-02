#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies
 *        two numbers
 *
 * @argc: integer
 * @argv: string value
 *
 * Return: 0 Success
*/

int main(int argc, char *argv[])
{
	(void)argc;

	if (argv[1] && argv[2])
	{
		int x;
		int y;

		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
