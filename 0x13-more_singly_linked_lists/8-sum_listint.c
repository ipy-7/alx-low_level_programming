#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - WWWWWWWW
 * @h: WWWWWWWWWW
 * Return: WWWWWWWW
 */
int sum_listint(listint_t *h)
{
	int sum;
	listint_t *curr;

	if (!h)
		return (0);

	sum = 0;
	curr = h;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
