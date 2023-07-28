#ifndef _LIST_H
#define _LIST_H
/**
 * struct list_s - Singly linked list
 * @str: string parameter
 * @len: string length
 * @next: contains address to the next node
 *
 * Description: structure to a linked list
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
/* Function prototype for printing all eements of a list */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif
