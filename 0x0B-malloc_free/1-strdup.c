#include "main.h"
#include <stdlib.h>

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
	int i = 0;
	int size = 0;

	while (temp[i] != '\0')
	{
		i++;
	}

	size = i + 1;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		var = (char *)malloc(sizeof(char) * size);
		str = var;
	}

	return (str);
}
