#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_endAdds a new node to alinked list
 * @head: double pointer to a linked list
 * @str: string for a new node
 *
 * Return: NULL if it well
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (str == NULL)
	return NULL;

	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return NULL;

	char *duplicated_str = strdup(str);
	if (duplicated_str == NULL)

	{
		free(new_node);
		return NULL;
	}

	new_node->str = duplicated_str;
	new_node->len = strlen(duplicated_str);
	new_node-> = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return new_node;

}
