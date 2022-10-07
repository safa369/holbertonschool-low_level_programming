#include "main.h"
int _putchar(char c);
/**
 * print_last_digit - print the las digigt of number.
 * @n: the number;
 * Return:number;
 */
int print_last_digit(int n)
{

if n < 0
	n = n * -1;
n = n % 10;
_putchar('0' + n);
return (n);
}
