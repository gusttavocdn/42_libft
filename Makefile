################################################################################
#                                     CONFIG                                   #
################################################################################

NAME      := libft.a
EXE       := main
CC        := cc
CFLAGS    := -Wall -Wextra -Werror -g

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

HEADERS := $(addprefix ./includes/, libft.h)
SRCS := $(addprefix ./src/, ft_isascii.c ft_free_matrix.c ft_memcpy.c ft_isalpha.c ft_tolower.c \
							ft_gnl.c ft_memcmp.c ft_isprint.c ft_isdigit.c ft_atoi_base.c ft_memset.c \
							ft_swap_str_pointers.c ft_isupper.c ft_putchar_fd.c ft_memmove.c ft_swap.c \
							ft_isspace.c ft_itoa_base.c ft_bzero.c ft_strnstr.c ft_split.c \
							ft_putnbr_unsigned_fd.c ft_strncmp.c ft_abs.c ft_itoa_base_u.c ft_strlcat.c \
							ft_islower.c ft_putnbr_fd.c ft_toupper.c ft_calc_nbr_digits.c \
							ft_putnbr_base.c ft_itoa.c ft_convert_base.c ft_memchr.c ft_striteri.c \
							ft_strrchr.c ft_strjoin.c ft_strtrim.c ft_strdup.c ft_calloc.c ft_strlcpy.c \
							ft_strchr.c ft_substr.c ft_putstr_fd.c ft_putmem_fd.c ft_strmapi.c \
                            ft_strlen.c ft_isalnum.c ft_atoi.c)


OBJS := $(SRCS:./src/%.c=./obj/%.o)


obj/%.o: src/%.c $(HEADERS)
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

#src/%.c.obj/%.o:
#	@echo "$(CYAN)Compiling $(YELLOW)$(notdir $<)$(CLR_RMV)..."
#	${CC} ${CFLAGS} -c $< -o $@ -I ./includes

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

run: all
	@echo "$(GREEN)Running ${CLR_RMV}$(MAIN) ${CLR_RMV}..."
	@$(CC) $(CFLAGS) -o $(EXE) $(EXE).c src/*.c -I ./includes
	@#./$(EXE)

.PHONY:		all clean fclean re print
