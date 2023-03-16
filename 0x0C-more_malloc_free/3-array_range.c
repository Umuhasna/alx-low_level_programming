#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the min value and the 1st element of the int array
 * @max: the max value and the last element of the int array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
