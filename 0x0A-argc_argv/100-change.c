#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 * @argc: amount of arguments
 * @argv: argument selector
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int cents;
	int amount = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("0\n");

	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		else if (cents >= 10)
			cents = cents - 10;
		else if (cents >= 5)
			cents = cents - 5;
		else if (cents >= 2)
			cents = cents - 2;
		else if (cents >= 1)
			cents = cents - 1;
		amount++;
	}
	printf("%d\n", amount);
	return (0);
}
