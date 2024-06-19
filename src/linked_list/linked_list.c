#include "../../includes/linked_list.h"

t_list *lst_create(void)
{
	t_list *list;

	list = (t_list *) malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->size = 0;
	list->head = NULL;
	return (list);
}

void lst_append_node(t_list *list, void *data)
{
	t_node *last_node;

	if (list->head == NULL)
	{
		list->head = lst_create_node(data);
		list->size++;
		return;
	}

	last_node = list->head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = lst_create_node(data);
	list->size++;
}

t_node *lst_remove_node(t_list *list, void *data)
{
	t_node *current;
	t_node *prev;

	if (!list->head)
		return (NULL);
	if (ft_memcmp(list->head->data, data, ft_strlen(data)) == 0)
	{
		current = list->head;
		current->next = NULL;
		list->size--;
		list->head = list->head->next;
		return (current);
	}
	prev = list->head;
	current = list->head->next;
	while (current != NULL)
	{
		if (ft_memcmp(current->data, data, ft_strlen(data)) == 0)
		{
			prev->next = current->next;
			list->size--;
			current->next = NULL;
			return (current);
		}
		prev = current;
		current = current->next;
	}
	return (NULL);
}

void lst_prepend_node(t_list *list, void *data)
{
	t_node *new_node;

	new_node = lst_create_node(data);
	new_node->next = list->head;
	list->head = new_node;
	list->size++;
}

t_node *lst_create_node(void *data)
{
	t_node *node;

	node = (t_node *) malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}
