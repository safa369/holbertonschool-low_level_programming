#include "main.h"
/**
 * clear_bit- function that clear a bit at given position.
 * @n: unsigned long int.
 * @index: unsigned int.
 * Return: 1 if succeed, -1 if failed.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(*n) * 8))
return (-1);
*n &= ~(1 << index);
return (1);
}
