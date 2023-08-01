#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - WWWWWWWW
 * @h: WWWWWWWWWW
 * Return: WWWWWWWW
 */
listint_t *reverse_listint(listint_t **h)
{
	listint_t *curr, *prev, *tmp;

	if (!h || !(*h))
		return (*h);

	prev = NULL;
	curr = (*h);
	while (curr)
	{
		tmp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = tmp;
	}

	(*h) = prev;
	return (prev);
}
