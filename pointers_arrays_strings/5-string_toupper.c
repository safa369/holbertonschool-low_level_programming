#include "main.h"
/**
 * *string_toupper - change alla lower case to uppercase.
 * @*: pointer;
 * Return: char;
 */
char *string_toupper(char *c)
{
	int a, i;

	a = strlen(c);
	for (i = 0; i < a; i++)
	{
		if (c[i] > 'a' && c[i] < 'z')
		{
			c[i] = (c[i] - 32);
		}
	}
return (c);
}
