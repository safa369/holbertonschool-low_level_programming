#include "main.h"
/**
 * create_file - function that create a file.
 * @filename: the name of the file.
 * @text_content: the string to write it in the file.
 * Return: 1 on sccess, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fptr, wr, i;

	if (!filename)
		return (-1);
	fptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fptr < 0)
		return (-1);
	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;
		wr = write(fptr, text_content, i);
		if (wr != i)
			return (-1);
	}
	close(fptr);
	return (1);
}
