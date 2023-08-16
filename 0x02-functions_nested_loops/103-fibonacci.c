#include "main.h"
#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */

int main()
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			sum += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", sum);

	return (0);
}
