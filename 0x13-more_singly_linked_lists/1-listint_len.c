#include <stdio.h>
#include "lists.h"

/**
 * listint_len - WWWWWWWW
 * @h: WWWWWWWWWW
 * Return: WWWWWWWW
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt;
	const listint_t *curr;

	cnt = 0;
	curr = h;
	while (curr)
	{
		cnt++;
		curr = curr->next;
	}

	return (cnt);
}
