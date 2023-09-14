#include "function_pointers.h"

/**
 * print_name - prints the name
 *
 * @name: name to print
 * @f: function to use
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
