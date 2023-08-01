#include "lists.h"
/**
 * print_listint - outputs all of linked list elements
 * @h: head of a linked list
 *
 * Return: n is the No. of nodes available
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
	printf("%d\n", h->n);
	num++;
	h = h->next;
}

return (num);
}

