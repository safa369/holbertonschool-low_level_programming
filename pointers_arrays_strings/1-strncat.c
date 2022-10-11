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
	
	for(i = 0; i <= n-1 && src[i] != '\0'; i++) 
	{
		*(dest + a + i) = *(src + i);
	}
	*(dest + a + i) = '\0';
	return (dest);
}
