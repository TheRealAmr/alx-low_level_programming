#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - copies the content of one file to another
 * @argc: nums of arguments
 * @argv: variadic arguments
 * Description: copies content to other file
 * Return: 1 if success and exit if anything else
*/

int main(int argc, char *argv[])
{
	int dest = 0, sender = 0, counter = 0;
	int sender_count = 1024;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_sender file_to\n");
		exit(97);
	}

	sender = open(argv[1], O_RDONLY);
	if (sender == 1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read sender file %s\n", argv[1]);
		exit(98);
	}

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == 1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (sender_count == 1024)
	{
		sender_count = read(sender, buffer, 1024);
		if (sender_count == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		counter = write(dest, buffer, sender_count);
		if (counter == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(sender)  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", sender);
		exit(100);
	}
	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}

	return (0);
}
