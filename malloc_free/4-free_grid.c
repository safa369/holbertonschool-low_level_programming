#include "main.h"
/**
 * free_grid - function frees 2 dimen grid.
 * @grid: int;
 * @height: int;
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
free(grid);
}
