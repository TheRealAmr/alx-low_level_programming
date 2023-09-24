#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 *        to make change for an amount of money
 * @argc: amount of arguments
 * @argv: argument selector
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int cents, amount = 0;

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
		if (cents >= 10)
			cents = cents - 10;
		if (cents >= 5)
			cents = cents - 5;
		if (cents >= 2)
			cents = cents - 2;
		if (cents >= 1)
			cents = cents - 1;
		amount++;
	}
	printf("%d\n", amount);
	return (0);
}
