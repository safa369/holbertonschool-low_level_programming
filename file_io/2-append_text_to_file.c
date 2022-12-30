#include "main.h"
/**
 * append_text_to_file - function that appends a text at the end of the end of the file.
 * @filename: the name of the file.
 * @text_content: the text to add to the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char * filename, char *text_content)
{
	int fptr, wr, i;

	if (!filename)
		return (-1);
	fptr = open(filename, O_WRONLY | O_APPEND);
	if (fptr == -1)
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
