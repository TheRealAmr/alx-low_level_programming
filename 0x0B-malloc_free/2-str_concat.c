#include "main.h"
#include <stdlib.h>

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
	_strcat(s1, s2);

	char *news = NULL;
	char *temp = s1;

	int i = 0;

	while (temp[i] != '\0')
	{
		i++;
	}

	news = (char *)malloc(sizeof(char) * i + 1);

	int j;

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
