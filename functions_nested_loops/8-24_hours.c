#include "main.h"
/**
 *jack_bauer - function prints every minute of the day ij Jack Bauer.
 *Return:void.
 */
void jack_bauer(void)
{
	int i = 0, n = 0, k, m, j, a;

		for (i = 0; i < 24; i++)
		{
			for (n = 0; n < 60; n++)
			{
			k = i / 10;
			_putchar('0' + k);
			j = i % 10;
			_putchar('0' + j);
			_putchar(':');
			m = n % 10;
			a = n / 10;
			_putchar('0' + a);
			_putchar('0' + m);
			_putchar('\n');
			}
		}
}
