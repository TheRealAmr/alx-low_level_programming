#include <stdio.h>
#include "lists.h"

void caller(void) __attribute__((beaconator));

/**
 * test - beaconator func
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
