################################################################################
#                                     CONFIG                                   #
################################################################################

NAME      := libft.a
EXE       := main
CC        := cc
CFLAGS    := -Wall -Wextra -Werror

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

HEADERS := $(addprefix ./includes/, libft.h)
SRCS := $(addprefix ./src/, ft_isalpha.c ft_isdigit.c ft_isalnum ft_isascii ft_isprint.c \
						 	ft_toupper.c ft_tolower.c ft_isspace.c ft_islower.c ft_isupper.c \
						 	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
						 	ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
						 	ft_strncmp.c ft_ftmemchr.c ft_memcmp.c ft_strnstr.c ft_atoic.c)


OBJS := $(SRCS:./src/%.c=./obj/%.o)


obj/%.o: $(SRCS) $(HEADERS)
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

################################################################################
#                                  Makefile  objs                              #
################################################################################

CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -rf

all: ${NAME}

${NAME}: $(OBJS) $(HEADERS)
		@echo "$(GREEN)Creating ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
		@ar -rcs ${NAME} ${OBJS} ${HEADERS}
		@echo "$(GREEN)$(NAME) created[0m ✔️"

run: all
		@echo "$(GREEN)Running ${CLR_RMV}$(MAIN) ${CLR_RMV}..."
		@$(CC) $(CFLAGS) -o $(EXE) $(EXE).c $(NAME)

clean:
			@${RM} ${OBJS} obj ${EXE}
			@echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@${RM} ${NAME}
			@echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

print:
	@echo "SRCS: $(SRCS)"
	@echo "OBJS: $(OBJS)"
	@echo "HEADERS: $(HEADERS)"

.PHONY:		all clean fclean re print
