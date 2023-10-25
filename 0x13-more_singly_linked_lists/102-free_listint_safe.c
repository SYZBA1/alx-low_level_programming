#include "lists.h"

/**
 * free_listint_safe - frees a linked list.
 * @p: pointer to the first node in the linked list.
 *
 * Return: number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **p)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!p || !*p)
	return (0);

	while (*p)
	{
	diff = *p - (*p)->next;
	if (diff > 0)
	{
	temp = (*p)->next;
	free(*p);
	*p = temp;
	len++;
	}
	else
	{
	free(*p);
	*p = NULL;
	len++;
	break;
	}
	}

	*p = NULL;

	return (len);
}
