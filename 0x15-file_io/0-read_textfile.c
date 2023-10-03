#include "main.h"

/**
 * read_textfile -  reads a text file and prints it
 *                  to the POSIX standard output
 * @filename: name of file to be read
 * @letters: amount of bytes
 * Return: actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filePointer;
	ssize_t lone, ltwo;
	char *buffer;

	if (filename == NULL)
		return (0);
	filePointer = open(filename, O_RDONLY);
	if (filePointer == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(filePointer);
		return (0);
	}
	lone = read(filePointer, buffer, letters);
	close(filePointer);
	if (lone == -1)
	{
		free(buffer);
		return (0);
	}
	ltwo = write(STDOUT_FILENO, buffer, lone);
	free(buffer);
	if (lone != ltwo)
		return (0);

	return (ltwo);
}
