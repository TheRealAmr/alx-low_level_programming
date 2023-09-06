#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: treat NULL as empty string if passed
 *         and return it if failure
*/

char *str_concat(char *s1, char *s2)
{
	int count = 0, count2 = 0;

	while (*(s1 + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(s1 + count) = *(s2 + count2);
		if (*(s2 + count2) == '\0')
			break;
		count++;
		count2++;
	}

	unsigned int i = 0;
	char *news = NULL;
	char *temp = s1;

	const char *result = s1;

	if (result == NULL)
	{
		result = "";
	}
	else
	{
		while (temp[i] != '\0')
		{
			i++;
		}
	}

	unsigned int j;
	int size = 0;

	size = i;

	news = (char *)malloc(sizeof(char) * size + 1);

	if (news != NULL)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			news[j] = s1[j];
		}
	}
	else
	{
		return (NULL);
	}

	news[j] = '\0';
	return (news);
}
