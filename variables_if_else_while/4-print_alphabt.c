#include <stdio.h>
/**
 * main - print alphabet.
 * Return:0;
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
	}
	putchar('\n');
	return (0);
}
