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
	int i, a;

	a = strlen(src);
	if (a == n)
	{
		printf("%s", src);
	}
	else
	{
		for (i = 0 ; i < n; i++)
		{
			dest[i] = src[i];
		}
		
	}
	return (dest);
}
