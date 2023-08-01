#include "lists.h"
/**
 * add_nodeint - creates a  new node at the start of a linked list
 * @head: points to first node
 * @n: holder for new node
 *
 * Return: new node of NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
