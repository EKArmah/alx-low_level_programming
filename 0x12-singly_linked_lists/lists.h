#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * list_t - typedef for struct list_t
 */
typedef struct list_t list_t;

/**
 * struct list_t - struct
 * @str: string
 * @len: length of string
 * @next: pointer to next node
 *
 * Description: n/a
 */
struct list_t
{
	char *str;
	size_t len;
	struct list_t *next;
};

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /*LISTS_H*/
