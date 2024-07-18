#include "search_algos.h"

/**
 * rec_search - A function that searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: Array input
 * @size: Array size
 * @value: Search value
 *
 * Return: Index of the value or -1.
 */
int rec_search(int *array, size_t size, int value)
{
	size_t i;
	size_t middle = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (middle && size % 2 == 0)
		middle--;

	if (value == array[middle])
	{
		if (middle > 0)
			return (rec_search(array, middle + 1, value));
		return ((int)middle);
	}

	if (value < array[middle])
		return (rec_search(array, middle + 1, value));

	middle++;
	return (rec_search(array + middle, size - middle, value) + middle);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index of the number
 *
 * @array: @array: Array input
 * @size: Array size
 * @value: Search value
 *
 * Return: Index of the value or -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int idx;

	idx = rec_search(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
