#include <stdio.h>
#include "lists.h"

/**
 * print_listint - WWWWWWWW
 * @h: WWWWWWWWWW
 * Return: WWWWWWWW
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt;
	const listint_t *curr;

	cnt = 0;
	curr = h;
	while (curr)
	{
		printf("%d\n", curr->n);
		cnt++;
		curr = curr->next;
	}

	return (cnt);
}
