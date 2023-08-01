#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - WWWWWWWW
 * @h: WWWWWWWWWW
 * @n: WWWWWWWW
 * Return: WWWWWWWW
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *newNode, *curr;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	curr = *h;
	newNode->n = n;
	newNode->next = NULL;

	while (curr && curr->next)
	{
		curr = curr->next;
	}

	if (!curr)
		(*h) = newNode;
	else
	{
		curr->next = newNode;
	}

	return (newNode);
}
