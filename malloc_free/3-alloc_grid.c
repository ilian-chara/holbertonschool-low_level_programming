#include <stdlib.h>
#include <stdio.h>
/**
* alloc_grid - allocate memory for an array of 2 dimmension
* @width: width of the array
* @height: height of the array
* Return: error if no memory else the full grid
*/

int **alloc_grid(int width, int height)
{
	int **g, e, r;

	if (width <= 0 || height <= 0)
	return (NULL);

	g = malloc(height * sizeof(int *));

	if (g == NULL)
	return (NULL);

	for (e = 0; e < height; e++)
	{
		g[e] = malloc(width * sizeof(int));
		if (g[e] == NULL)
		{
			while (e--)
				free(g[e]);
			free(g);
			return (NULL);
		}
	}
	for (e = 0; e < height; e++)
	{
		for (r = 0; r < width; r++)
		g[e][r] = 0;
	}
	return (g);
}
