#include "search_algos.h"

/**
 * interpolation_search - A function searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: Array input
 * @size: Array size
 * @value: Search value
 *
 * Return: Index of the value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	double i;
	size_t curr_pos, btm, top;

	if (array == NULL)
		return (-1);

	btm = 0;
	top = size - 1;

	while (size)
	{
		i = (double)(top - btm) / (array[top] - array[btm]) *
			(value - array[top]);

		curr_pos = (size_t)(btm + i);
		printf("Value checked array[%d]", (int)curr_pos);

		if (curr_pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[curr_pos]);
		}

		if (array[curr_pos] == value)
			return ((int)curr_pos);

		if (array[curr_pos] < value)
			btm = curr_pos + 1;
		else
			top = curr_pos - 1;

		if (btm == top)
			break;
	}

	return (-1);
}
