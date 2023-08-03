#include "lists.h"
/**
 * reverse_listint - prints alinked lis in reverse
 * @head: pointe to the next node
 * Return: Pointer to next node in reverse
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = next;
	}

	*head = last;

	return (*head);
}
