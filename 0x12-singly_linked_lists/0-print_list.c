#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elemnts of a t_list
 * @h: points to the list head
 *
 * Return: Nodes of the list
 */
size_t print_list(const list_t *h)
{
size_t node = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}

h = h->next;
node++;
}
return (node);
}
