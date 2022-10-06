#include "main.h"
/**
 * _isdigit - function checks for digit.
 * @c: integer
 * Return: 1 or 0;
 */
int _isdigit(int c)
{
	int a;

	if (c >= 48 && c < 58)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
