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
			news[j] = s1[j];
	}
	else
	{
		return (NULL);
	}

	news[j] = '\0';
	return (news);
}
