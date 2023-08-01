#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - WWWWWWWW
 * @h: WWWWWWWWWW
 * Return: WWWWWWWW
 */
int pop_listint(listint_t **h)
{
	listint_t *tmp;

	if (!h)
		return (0);

	tmp = *h;
	(*h) = (*h)->next;

	return (tmp->n);
}
