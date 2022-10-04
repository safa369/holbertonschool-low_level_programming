#include "main.h"
#include <ctype.h>
/**
 * _isalpha - cheks for alphabetics character.
 * @c: alphabetic character.
 * Return: 0 or 1;
 */
int _isalpha(int c)
{
	char p;

	if (isalpha(c))
	{
		p = 1;
	}
	else
	{
		p = 0;
	}
	return (p);
}
