#include "main.h"
/**
 * flip_bits - function tht flip the number of bits from one to another.
 * @n: first number.
 * @m: second number.
 * Return: value.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int value, j = 0;

value = n ^ m;
while (value != 0)
{
if ((value & 1) == 1)
j++;
value = value >> 1;
}
return (j);
}
