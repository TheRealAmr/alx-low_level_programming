#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print the dashboard
 *
 * @a: array of characters
 *
 * Description: a function to display the chessboard
 * Return: No return
*/

void print_diagsums(int *a, int size)
{
	int ch, s1 = 0, s2 = 0;

	for (ch = 0; ch < size; ch++)
	{
		s1 += a[ch];
		s2 += a[size - ch - 1];
		a += size;
	}

	printf("%d, ", s1);
	printf("%d\n", s2);
}
