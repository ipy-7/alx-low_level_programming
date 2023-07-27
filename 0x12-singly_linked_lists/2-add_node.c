#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - WWWWWWWW
 * @head: WWWWWWWWWWWWW
 * @str: WWWWWW
 * Return: WWWWWWW
 */
list_t *add_node(list_t **head, const char *str)
{
	const list_t *newNode;
	
	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->next = *head;
	(*head) = newNode;
	return (newNode);
}
