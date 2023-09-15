#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print anything
 *
 * @format: list of types for arguments passed to the function
 *
 * Return: no returns
*/

void print_all(const char * const format, ...)
{
	va_list thelist;
	unsigned int i = 0, z, o = 0;
	char *string;
	const char arg_array[] = "cifs";

	va_start(thelist, format);
	while (format && format[i])
	{
		z = 0;
		while (arg_array[z])
		{
			if (format[i] == arg_array[z] && o)
			{
				printf(", ");
				break;
			} z++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(thelist, int)), o = 1;
			break;
		case 'i':
			printf("%d", va_arg(thelist, int)), o = 1;
			break;
		case 'f':
			printf("%f", va_arg(thelist, double)), o = 1;
			break;
		case 's':
			string = va_arg(thelist, char *), o = 1;
			if (!string)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			break;
		} i++;
	}
	printf("\n"), va_end(thelist);
}
