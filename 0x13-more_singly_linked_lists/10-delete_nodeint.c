#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - WWWWWWWW
 * @h: WWWWWWWWWW
 * @index: WWWWWWWW
 * Return: WWWWWWWW
 */
listint_t *delete_nodeint_at_index(listint_t **h, unsigned int index)
{
	listint_t *curr, *tmp, *prev;
	unsigned int i;

	if (!h || !(*h))
		return (-1);

	curr = (*h);
	i = 0;
	prev = NULL;
	while (curr && i < index)
	{
		i++;
		prev = curr;
		curr = curr->next;
	}

	if (i != idx)
		return (-1);

	if (!prev)
	{
		tmp = curr->next;
		(*h) = tmp;
	}
	else
	{
		prev->next = curr->next;
	}

	free(curr);
	return (1);
}
