#include "../../includes/linked_list.h"

void lst_free_node(t_node *node)
{
	free(node->data);
	free(node);
}

void lst_clear(t_list *list)
{
	t_node *current;
	t_node *next;

	if (!list->head)
		return;
	current = list->head;
	next = current->next;
	while (next)
	{
		lst_free_node(current);
		current = next;
		next = current->next;
	}
	lst_free_node(current);
	list->head = NULL;
	list->size = 0;
	free(list);
}
