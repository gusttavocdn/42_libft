#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

#include "libft.h"
#include <stdlib.h>

typedef struct s_node
{
	void *data;
	struct s_node *next;
} t_node;

typedef struct s_list
{
	size_t size;
	t_node *head;
} t_list;


// Functions Declarations

t_list *lst_create(void);

t_node *lst_create_node(void *data);

void lst_append_node(t_list *list, void *data);

void lst_prepend_node(t_list *list, void *data);

t_node *lst_remove_node(t_list *list, void *data);

void lst_clear(t_list *list);

void lst_free_node(t_node *node);

#endif // LINKED_LISTS_H
