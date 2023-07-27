#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - WWWWWWWW
 * @h: WWWWWWWWWWWWW
 * Return: WWWWWWW
 */
size_t print_list(const list_t *h)
{
	size_t i;
	list_t *curr;

	curr = h;
	i = 0;
	while (curr)
	{
		printf("[%d] %s\n", curr->len, curr->str ? curr->str : "(nil)");
		curr = curr->next;
		i++;
	}

	return (i);
}
