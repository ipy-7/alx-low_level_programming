#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - WWWWWWWW
 * @h: WWWWWWWWWW
 * Return: WWWWWWWW
 */
void free_listint(listint_t *h)
{
	listint_t *tmp;

	while (h)
	{
		tmp = h->next;
		free(h);
		h = tmp;
	}
}
