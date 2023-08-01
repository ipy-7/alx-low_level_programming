#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - WWWWWWWW
 * @h: WWWWWWWWWW
 * @n: WWWWWWWW
 * Return: WWWWWWWW
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);
}
