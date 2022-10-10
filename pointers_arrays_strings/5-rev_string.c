#include "main.h"
/**
 * rev_string - reverse string.
 * @s: char;
 */
void rev_string(char *s)
{
	int i, len, temp, a;

	len = strlen(s);
	a = len / 2;
	for (i = 0; i < a; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

