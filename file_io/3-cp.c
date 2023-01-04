#include "main.h"
/**
 *main - copies the content of a file to another file.
 *@argc: total number of arguments.
 *@argv: the arguments .
 *Return: always 0.
 */
int main(int argc, char **argv)
{
    int fd1, fd2, read_count, write_count = 1024, close_value;
    char *buf[1024], *file_source, *file_destination;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    file_source = argv[1];
    file_destination = argv [2];
    fd1 = open(file_source, O_RDONLY);
    file_err(fd1, 98, fd1, file_source);
    fd2 = open(file_destination, O_CREAT| O_RDWR| O_TRUNC, 0664);
    file_err(fd2, 99, fd2, file_destination);
    while (write_count == 1024)
    {
        read_count = read(fd1, buf, 1024);
        file_err(read_count, 98, fd1, file_source);
        write_count = write(fd2, buf, read_count);
        file_err(write_count, 99, fd2, file_destination);
    }
    close_value = close(fd1);
    file_err(close_value, 100, fd1, file_source);
    close_value = close (fd2);
    file_err(close_value, 100, fd2, file_destination);
    return (0);
    }

 /**
 * file_err - function that print the error.
 * @r: the return value that returned from function.
 * @er: the error value to exit program.
 * @fv: fildes.
 * @file: name of file.
*/
void file_err(int r, int er, int fv, char *file)
{
    if (r < 0 && er == 98)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file);
        exit(98);
    }
    if (r < 0 && er == 99)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
        exit(99);
    }
    if (r < 0 && er == 100)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fv);
        exit(100);
    }
}