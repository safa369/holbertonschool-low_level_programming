#include "main.h"
/**
 * *_strncpy - copie string.
 * @dest: char;
 * @src: char;
 * @n: integer;
 *Return:char;
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
