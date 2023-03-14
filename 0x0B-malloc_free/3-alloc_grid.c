#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the first argument
 * @height: the second argument
 *
 * Return: returns a pointer to a 2 dimensional array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
