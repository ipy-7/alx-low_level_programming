#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - WWWWWWWW
 * @h: WWWWWWWWWW
 * Return: WWWWWWWW
 */
void free_listint2(listint_t **h)
{
	listint_t *tmp;

	while (**h && *h)
	{
		tmp = (*h)->next;
		free(*h);
		(*h) = tmp;
	}

	if (**h)
		(*h) = NULL;
}
