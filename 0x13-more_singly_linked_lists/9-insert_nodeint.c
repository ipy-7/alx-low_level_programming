#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - WWWWWWWW
 * @h: WWWWWWWWWW
 * @idx: WWWWWWWW
 * @n: WWWWWWWW
 * Return: WWWWWWWW
 */
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	listint_t *curr, *newNode, *prev;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	
	if (!h || !(*h))
	{
		if (idx != 0)
			return (NULL);

		if (!h)
		{
			h = &newNode;
		}
		else
		{
			(*h) = newNode;
		}

		return (newNode);
	}

	i = 0;
	prev = NULL;
	curr = (*h);
	while (curr && i < idx)
	{
		i++;
		prev = curr;
		curr = curr->next;
	}

	prev->next = newNode;
	newNode->next = curr;

	return (newNode);
}
