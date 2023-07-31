#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Function that fress a linked list
 * @head: Points to the next node
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}

