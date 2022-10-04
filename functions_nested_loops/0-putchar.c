#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
/**
*main - print _putchar.
*Return:0;
* _putchar - writes the character c to stdout
*/
int main(void)
{
	int i;
	char txt[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(txt[i]);
	}
	_putchar('\n');
	return (0);
}
