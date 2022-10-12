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
	while (i < n && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	while (i < n; i++)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
