#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - WWWWWWWW
 * @h: WWWWWWWWWW
 * Return: WWWWWWWW
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t i;

	i = 0;
	while (h && (*h))
	{
		i++;
		tmp = (*h)->next;
		free(*h);
		(*h) = tmp;
	}

	if (!h)
	{
		h = (listint_t *)NULL;
	}
	else
	{
		(*h) = NULL;
	}

	return (i);
}
