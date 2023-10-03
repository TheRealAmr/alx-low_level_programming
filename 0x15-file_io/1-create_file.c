#include "main.h"

/**
 * create_file -  a function that creates a file
 * @filename: name of file to be read
 * @text_content: content
 * Return: 1 on success -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int ans = 1, filePointer = 0, j = 0, length = 0;

	if (filename == NULL)
	{
		ans = -1;
		return (ans);
	}
	filePointer = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (filePointer == -1)
	{
		ans = -1;
		return (ans);
	}
	if (text_content)
	{

		while (text_content[j])
			j++;

		length = write(filePointer, text_content, j);
		if (length != j)
			ans = -1;
	}
	close(filePointer);
	return (ans);
}
