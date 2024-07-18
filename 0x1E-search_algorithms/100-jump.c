#include "search_algos.h"
#include <math.h>

/**
 * jump_search - A function searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: Array input
 * @size: Array size
 * @value: Search value
 *
 * Return: Index of tthe value or -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int idx, i, j, previous;

	if (array == NULL || size == 0)
		return (-1);

	i = (int)sqrt((double)size);
	j = 0;
	previous = idx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		j++;

		previous = idx;
		idx = j * i;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", previous, idx);

	for (; previous <= idx && previous < (int)size; previous++)
	{
		printf("Value checked array[%d] = [%d]\n", previous, array[previous]);
		if (array[previous] == value)
			return (previous);
	}

	return (-1);
}
