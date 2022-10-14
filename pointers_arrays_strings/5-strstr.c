#include "main.h"
/**
 * *_strstr - locate a substring;
 * @haystack: char;
 * @needle: char;
 * Return: char;
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			break;
	haystack++;
	}
	if (*haystack == *needle)
		return (haystack);
	return (NULL);
}
