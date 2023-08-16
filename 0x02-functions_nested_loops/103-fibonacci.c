#include "main.h"
#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */

int main(void)
{
	int t1 = 1;
	int t2 = 2;
	int next;
	int sum = 2;

	while (next <= 4000000)
	{
		next = t1 + t2;
		if (next % 2 == 0)
			sum = sum + next;
		t1 = t2;
		t2 = t1;
	}

	printf("%d\n", sum);
	return (0);
}
