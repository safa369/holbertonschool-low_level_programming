#include "main.h"
/**
 * *_strchr - function locate a charactere in a string;
 * @s: char;
 * @c: char;
 * Return: char or NULL;
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0;s[i] != '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	
	}
	return (NULL);
}
