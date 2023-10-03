#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file
 * @filename: name of file to be read
 * @text_content: content
 * Return: 1 on success -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int filePointer;
	int letCount;
	int perm;

	if (!filename)
		return (-1);

	filePointer = open(filename, O_WRONLY | O_APPEND);

	if (filePointer == -1)
		return (-1);

	if (text_content)
	{
		for (letCount = 0; text_content[letCount]; letCount++)
			;

		perm = write(filePointer, text_content, letCount);

		if (perm == -1)
			return (-1);
	}

	close(filePointer);

	return (1);
}
