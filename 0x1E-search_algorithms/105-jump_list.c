#include "search_algos.h"

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: Pointer to the head of the the list.
 * @size: Array size
 * @value: Search value
 *
 * Return: Index of the value or -1.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx, i, j;
	listint_t *previous;

	if (list == NULL || size == 0)
		return (NULL);

	j = (size_t)sqrt((double)size);
	idx = 0;
	i = 0;

	do {
		prev = list;
		i++;
		idx = i * j;

		while (list->next && list->idx < idx)
			list = list->next;

		if (list->next == NULL && idx != list->idx)
			idx = list->idx;

		printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);

	} while (idx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)previous->idx, (int)list->idx);

	for (; previous && previous->idx <= list->idx; previous = previous->next)
	{
		printf("Value checked at index [%d] = [%d]\n",
				(int)previous->idx, previous->n);
		if (previous->n == value)
			return (previous);
	}

	return (NULL);
}
