#include <stdio.h>

/**
 * main - prints the highest prime factor of 612852475143
 * Return: 0 if successful
 */

int main(void)
{
	unsigned long int x = 3;
	unsigned long int prime = 612852475143;

	while (x <= prime / 2)
		if (prime % x == 0)
			prime = prime / x;
		else
			x += 2;

	printf("%ld\n", prime);

	return (0);
}
