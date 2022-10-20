#include <stdio.h>
/**
 * main - funtion print all argument it receives.
 * @argc: int;
 * @argv: char;
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
