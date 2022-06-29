#include "main.h"

/**
 * alloc_grid - pointer to a 2 dimensional array
 * @width: input width
 * @height: input height
 *
 * Return: returns NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **s, r, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(int *) * height);
	if (!s)
	{
		return (NULL);
	}
	for (r = 0; r < height; r++)
	{
		s[r] = malloc(sizeof(int) * width);
		if (s[r] == NULL)
		{
			for (; r >= 0; r--)
			{
				free(s[r]);
			}
			free(s);
			return (NULL);
		}
		for (c = 0; c <= width; c++)
		{
			s[r][c] = 0;
		}
	}
	return (s);
}
