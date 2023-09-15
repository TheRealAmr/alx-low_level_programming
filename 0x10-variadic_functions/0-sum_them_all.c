#include <stdarg.h>

/**
 * sum_them_all - sums up all the arguments passed
 *
 * @n: number of arguments
 * Return: total sum of arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int total;
	va_list ls;

	va_start(ls, n);
	for (j = 0, total = 0; j < n; j++)
		total += va_arg(ls, int);

	va_end(ls);
	return (total);
}
