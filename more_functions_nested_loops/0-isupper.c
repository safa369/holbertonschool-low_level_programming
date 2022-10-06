#include "main.h"
/**
 * _isupper - cheks for uppercase chracter.
 * @c: inetger.
 * Return:0 or 1.
 */
int _isupper(int c)
{
	int r;

	if (c >= 65 && c <= 90)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}

