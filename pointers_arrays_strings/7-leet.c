#include "main.h"
/**
 * *leet - encodes a string.
 * @c : char;
 * Return: char;
 */
char *leet(char *c)
{
	char s1[5] = "aeotl";
	char s2[5] = "AEOTL";
	char s3[5] = "43071";
	int i, j, n;

	n = strlen(c);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == s1[j] || c[i] == s2[j])
				c[i] = s3[j];
		}
	}
	return (c);
}

