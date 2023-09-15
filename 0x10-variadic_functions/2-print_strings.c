#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print the string arguments with separator
 *
 * @separator: thing to print between strings
 * @n: number of arguments
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *pointer;
	unsigned int j;
	va_list ls;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(ls, n);

	if (n > 0)
		printf("%s", va_arg(ls, char *));
	for (j = 1; j < n; j++)
	{
		pointer = va_arg(ls, char*);
		if (pointer == NULL)
			pointer = "(nil)";
		printf("%s%s", sep, pointer);
	}
	printf("\n");
	va_end(ls);
}
