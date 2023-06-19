NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_strchr.c ft_toupper.c ft_tolower.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c \
	ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c \

OBJS = ${SRC:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = libft.h
MAIN = main
TEST_FOLDER = tests

all:	${NAME}

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

test: ${TEST_FOLDER}
	cd ${TEST_FOLDER}
	make

# so:
# 	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC)
# 	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: clean all fclean re so test
