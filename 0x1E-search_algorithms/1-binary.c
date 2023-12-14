#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i, j, m, n;

	if (!array)
		return (-1);

	i = 0;
	j = size - 1;

	while (i <= j)
	{
		m = i + (j - i) / 2;
		printf("Searching in array: ");
		for (n = i; n <= j; n++)
		{
			printf("%d", array[n]);
			if (n < j)
				printf(", ");
		}
		printf("\n");
		if (array[m] < value)
			i = m + 1;
		else if (array[m] > value)
			j = m - 1;
		else
			return (m);
	}
	return (-1);
}
