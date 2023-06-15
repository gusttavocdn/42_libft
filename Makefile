NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c \

OBJS = ${SRC:.c=.o}

CC = cc
# -g flag to debug remember to remove
CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h

MAIN = main

all:	${NAME}

debug: ${NAME} ${MAIN}.c
	${CC} ${CFLAGS} -g ${MAIN}.c ${NAME} -o ${MAIN}
	${RM} ${OBJS}
	clear

run: debug ${MAIN}
	@./${MAIN}

${NAME}: ${OBJS} ${HEADER}
	ar -rcs ${NAME} ${OBJS} ${HEADER}

# Tell make how to transform a .c file into a object file
.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS} libft.so *.out

fclean: clean
	${RM} ${NAME}

re: fclean all

# so:
# 	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC)
# 	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: clean all fclean re so debug run