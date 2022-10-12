#include "main.h"
/**
 * *cap_string - capitalizes all words of a sring;
 * @c: pointer of char;
 * Return: char;
 */
char *cap_string(char *c)
{
	int i, n;

	n = strlen(c);
	i = 0;
	while (i < n)
	{
		if (c[i] != '\\')
			i++;
		else if (c[i] == '\\')
		{
			if (c[i + 1] == 'n')
			{
				c[i] = '\0';
				i++;
				c[i] = '\n';
			}
			else if (c[i + 1] == 't')
			{
				c[i] = '\t';
				i++;
			}
		}
		i++;
	}
	return (c);
}
