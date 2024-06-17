#include "../includes/libft.h"

#define FD_OPEN_LIMIT 1024
#define LINE_BREAK_BYTE 1

static void read_file_content(int fd, char **static_buffer);

static void update_static_buffer(char **static_buffer, char *new_content);

static char *get_current_line(char **static_buffer);

static char *make_line(size_t line_size, char **static_buffer,
                       int is_last_line);

char *ft_gnl(int fd)
{
	static char *buffer[FD_OPEN_LIMIT];
	char *current_line;

	if (fd < 0 || fd >= FD_OPEN_LIMIT)
		return (NULL);
	read_file_content(fd, &buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	current_line = get_current_line(&buffer[fd]);
	return (current_line);
}

static void read_file_content(int fd, char **static_buffer)
{
	ssize_t bytes_read;
	char *local_buffer;

	local_buffer = (char *) malloc((BUFFER_SIZE + NULL_BYTE) * sizeof(char));
	if (!local_buffer)
		return;
	bytes_read = read(fd, local_buffer, BUFFER_SIZE);
	if (bytes_read < 0)
		return (free(local_buffer));
	local_buffer[bytes_read] = '\0';
	while (bytes_read > 0 && !ft_strchr(local_buffer, '\n'))
	{
		update_static_buffer(static_buffer, ft_strjoin(*static_buffer,
		                                               local_buffer));
		bytes_read = read(fd, local_buffer, BUFFER_SIZE);
		local_buffer[bytes_read] = '\0';
	}
	if (*local_buffer == '\0' && (*static_buffer == NULL
	                              || **static_buffer == '\0'))
		update_static_buffer(static_buffer, NULL);
	else
		update_static_buffer(static_buffer, ft_strjoin(*static_buffer,
		                                               local_buffer));
	free(local_buffer);
}

static void update_static_buffer(char **static_buffer, char *new_content)
{
	char *old_static_buffer_content;

	old_static_buffer_content = *static_buffer;
	*static_buffer = new_content;
	free(old_static_buffer_content);
	old_static_buffer_content = NULL;
}

static char *get_current_line(char **static_buffer)
{
	size_t size;
	int is_last_line;
	char *line;

	size = 0;
	is_last_line = FALSE;
	while (*(*static_buffer + size) != '\n' && *(*static_buffer + size) != '\0')
		size++;
	if (*(*static_buffer + size) == '\0')
		is_last_line = TRUE;
	line = make_line(size, static_buffer, is_last_line);
	return (line);
}

static char *make_line(size_t line_size, char **static_buffer, int is_last_line)
{
	char *line;

	if (is_last_line)
	{
		line = (char *) malloc((line_size + NULL_BYTE) * sizeof(char));
		if (!line)
			return (NULL);
		ft_strlcpy(line, *static_buffer, line_size + NULL_BYTE);
		update_static_buffer(static_buffer, NULL);
		return (line);
	}
	line = (char *) malloc((line_size + NULL_BYTE + LINE_BREAK_BYTE)
	                       * sizeof(char));
	if (!line)
		return (NULL);
	ft_strlcpy(line, *static_buffer, line_size + NULL_BYTE + LINE_BREAK_BYTE);
	update_static_buffer(static_buffer, ft_strdup(*static_buffer + line_size
	                                              + LINE_BREAK_BYTE));
	return (line);
}
