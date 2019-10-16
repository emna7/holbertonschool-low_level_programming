#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function that frees a grid
 * @grid: 2 dimensional array
 * @height: int
 * Return: void
*/
void free_grid(int **grid, int height)
{
int i;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
