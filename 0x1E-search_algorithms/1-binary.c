#include "search_algos.h"

/**
 * recursive_search - A function that searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: Array to search
 * @size: Array size
 * @value: Search value
 * Return: Index of value or -1.
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t i;
	size_t mid_point = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (mid_point && size % 2 == 0)
		mid_point--;

	if (value == array[mid_point])
		return ((int)mid_point);

	if (value < array[mid_point])
		return (recursive_search(array, mid_point, value));

	mid_point++;

	return (recursive_search(array + mid_point,
				 size - mid_point, value) + mid_point);
}

/**
 * binary_search - A function that searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: Array input
 * @size: Array size
 * @value: Search value
 * Return: Index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int idx;

	idx = recursive_search(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
