#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

void point_arry(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n-1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	prtinf("\n");
}
