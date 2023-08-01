#include "lists.h"
/**
 * pop_listint - removes linked list head node
 * @head: points to first elementof a linked lists
 *
 * Return: Deleted elements || NULL
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
