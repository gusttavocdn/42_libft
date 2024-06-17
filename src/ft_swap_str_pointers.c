#include "../includes/libft.h"

void ft_swap_str_pointers(char **old_pointer, char *new_string)
{
	char *old_static_buffer_content;

	old_static_buffer_content = *old_pointer;
	*old_pointer = new_string;
	free(old_static_buffer_content);
	old_static_buffer_content = NULL;
}
