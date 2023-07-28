#include <stdlib.h>
#include "lists.h"

/**
 * list_len - print number of elements in a linked list
 * @h: points to head of a linked list
 *
 * Return: Number pf elements in a node
 */
size_t list_len(const list_t *h)
{
size_t node = 0;

while (h != NULL)
{
node++;
h = (*h).next;
}
return (node);
}
