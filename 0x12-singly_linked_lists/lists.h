#ifndef _LIST_H
#define _LIST_H
#include <stddef.h>
/**
 * struct list_s - Singly linked list
 * @str: string parameter
 * @len: string length
 * @next: contains address to the next node
 *
 * Description: structure to a linked list
 */
typedef struct no_of_elements
{
char *str;
size_t len;
struct no_of_elements *next;
} list_t;
/* Function prototype for printing all eements of a list */
size_t print_list(const list_t *h);
size_t no_of_elements(const list_t *h);
#endif