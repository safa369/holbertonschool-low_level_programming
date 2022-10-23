#include <stdio.h>
#include <stdlib.h>
/**
 * main - program add positive numbers.
 * @argv: int;
 * @argc: char;
 * Return: 0 or 1;
 */
int main(int argc, char *argv[])
{
	int i, a, j, add = 0;
	
	if (argc < 1)
	{
		printf("0\n");
		return(0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			a = strlen(argv[i])
				for (j = 0; j < a; j++)
				{
			if (!atoi(argv[i][j]))
				{
					printf("ERROR\n");
					return(1);
				}
				}	
		add = add + atoi(argv[i]);
		}
	}
	printf("%d\n", add);
		return(0);
}
