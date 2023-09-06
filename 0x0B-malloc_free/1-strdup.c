#include "main.h"
11;rgb:0000/0000/0000#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer to a newly
 *
 * @str: pointer pointing to the new allocated memory
 *
 * Return: NULL if str = NULL
*/

char *_strdup(char *str)
{
	char *var = NULL;
	char *temp = str;
	unsigned int i = 0;
	unsigned int j;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (temp[i] != '\0')
		{
			i++;
		}
	}

	size = i;

	var = (char *)malloc(sizeof(char) * size + 1);

	if ((var != NULL) && (str != NULL))
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			var[j] = str[j];
		}
	}
	else
	{
		return (NULL);
	}

	var[j] = '\0';
	return (var);
}
