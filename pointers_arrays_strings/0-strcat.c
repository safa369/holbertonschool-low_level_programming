#include "main.h"
/**
 * *_strcat - concatenate two, string.
 * @dest: char;
 * @src: char;
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int a, b, i, j, k;
	char str[100];

	a = strlen(dest);
	b = strlen(src);
	k = 0;
	for (i = 0 ;i < a; i++)
	{
		str[k] = dest [i];
		k++;
	}
	for(j = 0 ; j < b; j++)
	{
		str[k] = src[j];
		k++;
	}
	str[k] = '\0';
	dest = str;
	return dest;
}

