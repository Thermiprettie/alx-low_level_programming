#ifndef LISTS_H
#define LISTS_H

#include <string.h>
#include <stdlib.h>
#include <stdargs.h>
#include <stdio.h>

/* prototypes */

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

size_t print_list(const list_t *h);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

#endif
