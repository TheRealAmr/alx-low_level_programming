#include "main.h"
#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int t1 = 1, t2 = 2;
	int nextTerm = t1 + t2;

	for (i = 2; i <= 50; ++i)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return (0);
}
