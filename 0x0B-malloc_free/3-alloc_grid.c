#include "main.h"

/**
 * alloc_grid - Task 3
 *
 * @width: width of 2d array
 * @height: height of 2d array
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **ar;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (i = i; i > 0; i--)
			{
				free(ar[i]);
			}
			free(ar);
		}
	}

	return (ar);
}
