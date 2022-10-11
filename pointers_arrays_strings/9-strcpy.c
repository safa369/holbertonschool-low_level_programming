#include "main.h"
/**
 * *_strcpy - copie the string .
 * @src: char;
 * @dest: char;
 * Return: char;
 */
char *_strcpy(char *dest, char *src)
{
	int a, i;

	a = strlen(src);
	while (i = 0; i < a; i++ && src[i] != '\0')
		dest[i] = src[i];
	return (dest);
}
