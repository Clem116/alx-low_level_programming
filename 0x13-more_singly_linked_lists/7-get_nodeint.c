#include "lists.h"
/**
 * get_nodeint_at_index - returns node to index
 * @head: first element of linked lst
 * @index: return node
 * Return: points to current node ||NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r = 0;
	listint_t *temp = head;

	while (temp && r < index)
	{
		temp = temp->next;
		r++;
	}
	return (temp ? temp : NULL);
}
