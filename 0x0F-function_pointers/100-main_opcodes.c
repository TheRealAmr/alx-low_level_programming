#include <stdio.h>
#include <stdlib.h>

/**
 * main - function with two arguments
 *
 * @argc: int type argument count
 * @argv: char type argument array
 *
 * Description: print the opcode
 * Return: N/A
*/

int main(int argc, char **argv)
{
	int total;

	total = 0;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (total < atoi(argv[1]))
	{
		printf("%02x", *((unsigned char *)main + total));
		total++;
		if (atoi(argv[1]) > total)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
