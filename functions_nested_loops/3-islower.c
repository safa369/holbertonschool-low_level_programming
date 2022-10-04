#include "main.h"
#include <ctype.h>
/**
 *_islower - cheks for lowercase character.
 * Return: 1 or 0;
 */
int _islower(void)
{
	char lower;
	int c;

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
