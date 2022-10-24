#include "main.h"
/**
 * alloc_grid - func return a pointer to adimen array of integer.
 * @width: integer.
 * @height: integer;
 * Return: integer;
 */
int **alloc_grid(int width, int height)
{
	int **grid, w, h;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{

			while (h >= 0)
		{
			free(grid[h]);
			h--;
		}
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}
