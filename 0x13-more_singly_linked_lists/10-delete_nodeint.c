#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes a certain node in an index
 * @index: Node for deletion
 * @head: point to the next linked list node
 * Return: Always Success (1) or NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *point = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (x < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		x++;
	}

	point = temp->next;
	temp->next = point->next;
	free(point);

	return (1);
}
