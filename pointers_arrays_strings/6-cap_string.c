#include "main.h"
/**
 * *cap_string - capitalizes all words of a sring;
 * @c: pointer of char;
 * Return: char;
 */
char *cap_string(char *c)
{
	int n, j;

	n = strlen(c);
	c[0] = toupper(c[0]);
	for (j = 0; j < n; j++)
	{
		if (c[j] == ',' ||
		c[j] == ';' ||
		c[j] == '.' ||
		c[j] == '!' ||
		c[j] == '?' ||
		c[j] == '"' ||
		c[j] == '(' ||
		c[j] == ')' ||
		c[j] == '{' ||
		c[j] == '}' ||
		c[j] == ' ' ||
		c[j] == '\t' ||
		c[j] == '\n' ||
		c[j] == '\0')
		c[j + 1] = toupper(c[j + 1]);
		}
	return (c);
}
