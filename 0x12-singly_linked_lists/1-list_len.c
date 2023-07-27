#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - WWWWWWWW
 * @h: WWWWWWWWWWWWW
 * Return: WWWWWWW
 */
size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *curr;

	curr = h;
	i = 0;
	while (curr)
	{
		curr = curr->next;
		i++;
	}

	return (i);
}
