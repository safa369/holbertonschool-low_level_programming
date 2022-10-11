#include "main.h"
/**
 * _strncat - concatenate two string;
 *@src: char;
 *@dest: char;
 *@n: integer;
 *Return: char;
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a;


	a = strlen(dest);
	i = 0;
	while (n != 0)
	{
		*(dest + a + i) = *src;
		i++;
		n--;
		src++;
	}
	return (dest);
}
