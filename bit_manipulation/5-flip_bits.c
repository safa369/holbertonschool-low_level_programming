#include "main.h"
/**
 * flip_bits - function tht flip the number of bits from one to another.
 * @n: first number.
 * @m: second number.
 * Return: value.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int value, j;

value = n ^ m;
j = 0;
while (value != 0)
{
j = j + (value & 1);
value = value >> 1;
}
return (j);
}
