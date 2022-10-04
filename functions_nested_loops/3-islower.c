#include "main.h"
#include <ctype.h>
/**
 *_islower - cheks for lowercase character.
 * @c: lowercase character
 * Return: 1 or 0;
 */
int _islower(int c)
{
	char lower;

	if (islower(c))
	{
		lower = 1;
	}
	else
	{
		lower = 0;
	}
	return (lower);
}
