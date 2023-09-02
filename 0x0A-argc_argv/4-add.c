#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 *
 * @argc: integer
 * @argv: string value
 *
 * Return: 0 Success
*/

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (argv[i][0] >= 'a' && argv[i][0] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			if (atoi(argv[i]) >= 0)
			{
				sum = sum + atoi(argv[i]);
				printf("%d\n", sum);
			}
			else
			{
				printf("0\n");
			}
		}
	}

	return (0);
}
