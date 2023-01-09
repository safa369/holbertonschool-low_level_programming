#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at given position.
 * @n: unsigned int.
 * @index: the given index to change it .
 * Return: the value of the bit.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(*n) * 8))
return (-1);
*n |= 1 << index;
return (1);
}
