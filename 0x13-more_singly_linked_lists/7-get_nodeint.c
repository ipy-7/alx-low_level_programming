#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - WWWWWWWW
 * @h: WWWWWWWWWW
 * @index: WWWWWW
 * Return: WWWWWWWW
 */
listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	unsigned int i;
	listint_t *curr;

	if (!h)
		return (NULL);

	i = 0;
	curr = h;
	while (curr->next && i < index)
	{
		i++;
		curr = curr->next;
	}

	if (i == index)
		return (curr);

	return (NULL);
}
