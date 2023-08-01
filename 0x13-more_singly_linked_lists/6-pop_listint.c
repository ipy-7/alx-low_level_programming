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
	int t;

	if (!h || !(*h))
		return (0);

	tmp = *h;
	t = tmp->n;
	free(tmp);
	(*h) = (*h)->next;

	return (t);
}
