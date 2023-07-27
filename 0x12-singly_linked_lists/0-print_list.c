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
	const list_t *curr;

	curr = h;
	i = 0;
	while (curr)
	{
		if (curr->str)
			printf("[%d] %s\n", curr->len, curr->str);
		else
			printf("[0] (nil)\n");
		curr = curr->next;
		i++;
	}

	return (i);
}
