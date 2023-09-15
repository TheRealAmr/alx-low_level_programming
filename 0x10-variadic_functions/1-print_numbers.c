#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print the integer arguments with separator
 *
 * @separator: thing to print between numbers
 * @n: number of arguments
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int j;
	va_list ls;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(ls, n);

	if (n > 0)
		printf("%d", va_arg(ls, int));
	for (j = 1; j < n; j++)
		printf("%s%d", sep, va_arg(ls, int));
	printf("\n");
	va_end(ls);
}
