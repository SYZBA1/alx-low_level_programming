#include "search_algos.h"

/**
  * _binary_search - A function that searches for a value in a sorted array
  * of integers using binary search.
  *
  * @array: Array input.
  * @start: Start index of the [sub]array to search.
  * @end: End index of the [sub]array to search.
  * @value: Search value.
  *
  * Return: Index where the value or -1.
  */
int _binary_search(int *array, size_t start, size_t end, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (end >= start)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = start + (end - start) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			end = i - 1;
		else
			start = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - A function that searches for a value in a
  * sorted array of integers using exponential search.
  *
  * @array: Array input.
  * @size: Array size.
  * @value: Search value.
  *
  * Return: Index of the value or -1.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, end;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	end = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, end);
	return (_binary_search(array, i / 2, end, value));
}
