NAME = libft.a

SRC = ft_isalpha.c  ft_isdigit.c \
	ft_isalnum.c  ft_isascii.c \
	ft_isprint.c

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