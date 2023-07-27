#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - WWWWWWWW
 * @head: WWWWWWWWWWWWW
 * @str: WWWWWW
 * Return: WWWWWWW
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = str ? strlen(str) : 0;
	newNode->next = NULL;

	if (!(*head))
	{
		(*head) = newNode;
		return (newNode);
	}

	curr = (*head);
	while (curr->next)
	{
		curr = curr->next;
	}

	curr->next = newNode;
	return (newNode);
}
