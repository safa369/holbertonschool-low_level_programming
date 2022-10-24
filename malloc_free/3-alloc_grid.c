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
	grid = malloc((width * height) * sizeof(*grid));
	if (grid == NULL)
		return(NULL);
	else
	{
	w = 0;
	h = 0;
	while (w < width)
	{
		while (h < height)
		{
			grid[w][h] = 0;
			h++;
		}
		w++;
	}
	}
	return (grid);
}
