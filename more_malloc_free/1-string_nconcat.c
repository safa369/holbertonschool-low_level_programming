#include "main.h"
/**
 * string_nconcat - function concatenate two string.
 * @s1: char;
 * @s2: char;
 * @n: unsigned int;
 * Return: char;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, a, b;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	b = 0;
	if (n >= j)
	{
		b = j;
		ptr = malloc(i + j + 1 * sizeof(*ptr));
	}
	else
	{
		ptr = malloc(i + n + 1 * sizeof(*ptr));
	
		b = n;
	}
	if (ptr == NULL)
		return(NULL);
	for(a = 0; a < i; a++)
	ptr[a] = s1[a];
		j = 0;
	for (j = 0; j < b; j++)
	{
		ptr[a] = s2[j];
		a++;
	}
	ptr[a] = '\0';
	return(ptr);
}
