#include "main.h"
int _putchar(char c);
/**
 * print_last_digit - print the las digigt of number.
 * @n: the number;
 * Return:number;
 */
int print_last_digit(int n)
{
	char a;

n = abs(n);	
n = n % 10;
a = n + 48;
_putchar(a);
return (n);
}
