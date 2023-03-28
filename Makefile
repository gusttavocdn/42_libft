NAME = libft.a

SRC = ft_isalpha.c  ft_isdigit.c \
	ft_isalnum.c  ft_isascii.c \
	ft_isprint.c ft_strlcpy.c \
	ft_strlen.c  ft_atoi.c \
	ft_bzero.c ft_calloc.c \
	ft_itoa.c ft_memchr.c \
	ft_memmove.c ft_memmcmp.c \
	ft_memset.c ft_putchar_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c ft_strchr.c \
	ft_strdup.c ft_strjoin.c \
	ft_strlcat.c ft_strlcpy.c \
	ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_strtrim.c \
	ft_substr.c ft_tolower.c \
	ft_toupper.c \

OBJS = ${SRC:.c=.o}

CC = cc

FLAGS = -Wall -Wextra -Werror

HEADER = libft.h

all:	${NAME}

${NAME}: ${OBJS} ${HEADER}
	ar -rcs ${NAME} ${OBJS} ${HEADER}

.c.o:
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean all fclean re