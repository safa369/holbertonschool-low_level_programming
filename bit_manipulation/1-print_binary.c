#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the number to print it.
*/
void print_binary(unsigned long int n)
{
    int printbin = ((n & 1) + '0');

if (n > 1)
{
print_binary(n >> 1);
}
_putchar(printbin);
}