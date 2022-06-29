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
	int **array;
	int i;

	if (!width || !height)
	{
		return (NULL);
	}
	array = (int **) malloc(height * sizeof(int *));
	if (!array)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	}
	if (array != NULL)
	{
	return (array);
	}
	return (NULL);
}
