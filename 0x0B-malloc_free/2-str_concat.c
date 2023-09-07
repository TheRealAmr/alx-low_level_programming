#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, first, second, total;
	char *final;

	first = second = total = 0;

	if ((s1 != NULL) && (s2 != NULL))
	{
		i = 0;
		while (s1[i] != '\0')
		{
			i++;
			first++;
		}

		i = 0;
		while (s2[i] != '\0')
		{
			i++;
			second++;
		}
	}

	total = first + second;
	final = (char *)malloc(sizeof(char) * total + 1);

	if (final == NULL)
		return (NULL);

	for (i = 0; i < first; i++)
		final[i] = s1[i];
	for (j = 0; j < second; j++)
	{
		final[i] = s2[j];
		i++;
	}
	final[i] = '\0';

	return (final);
}
