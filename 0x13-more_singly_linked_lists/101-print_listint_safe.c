#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - WWWWWWWW
 * @h: WWWWWWWWWW
 * Return: WWWWWWWW
 */
size_t print_listint_safe(listint_t *h)
{
	listint_t *curr;
	size_t i;

	i = 0;
	curr = h;
	while (curr)
	{
		i++;
		printf("[%x] %d\n", curr, curr->n);
		curr = curr->next;
	}

	return (i);
}
