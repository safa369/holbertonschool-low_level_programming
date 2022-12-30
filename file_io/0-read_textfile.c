#include "main.h"
/**
 * read_textfile- function that read a text file.
 * @filename: the name of  file to read it.
 * @letters: the number of leters.
 * Return: return the number of letters are read from the file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int fr, n;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	fr = read(fd, buf, letters);
	if (fr == -1)
		return (0);
	n = write(STDOUT_FILENO, buf, fr);
	if (n == -1)
		return (0);
	free(buf);
	close(fd);
	return (n);
}
