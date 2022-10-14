#include "main.h"
/**
 * *_strchr - function locate a charactere in a string;
 * @s: char;
 * @c: char;
 * Return: char or NULL;
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
		return(s);
		break;
		}
	s++;
	}
	return (NULL);
}
