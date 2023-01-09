#include "main.h"
/**
 * get_bit - function that returns the value of a bit at given index.
 * @n: the number to search in.
 * @index: the index of the bit.
 * Return: the value of the bit or -1.
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int b;

b = (n >> index) & 1;
if ((b == 1) || (b == 0))
return (b);
else
return (-1);
}
