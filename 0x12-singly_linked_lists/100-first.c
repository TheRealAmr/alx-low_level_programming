#include <stdio.h>
#include "lists.h"

void caller(void) __attribute__((constructor));

/**
 * caller - constructor func
 *
 * Description: prints a simple string
 *
 * Return: Nothing
*/

void caller(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
