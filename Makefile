################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := libft.a
CC        := cc
FLAGS    := -Wall -Wextra -Werror 
################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

MAIN := main.c

SRCS        :=      ft_memset.c \
                          ft_memchr.c \
                          ft_strlen.c \
                          ft_isalpha.c \
                          ft_memmove.c \
                          ft_putstr_fd.c \
                          ft_isprint.c \
                          ft_substr.c \
                          ft_strjoin.c \
                          ft_putendl_fd.c \
                          ft_itoa.c \
                          ft_strrchr.c \
                          ft_isascii.c \
                          ft_tolower.c \
                          ft_toupper.c \
                          ft_strdup.c \
                          ft_calloc.c \
                          ft_memcpy.c \
                          ft_atoi.c \
                          ft_bzero.c \
                          ft_strlcat.c \
                          ft_strncmp.c \
                          ft_isalnum.c \
                          ft_memcmp.c \
                          ft_putnbr_fd.c \
                          ft_strtrim.c \
                          ft_strchr.c \
                          ft_strnstr.c \
                          ft_isdigit.c \
                          ft_strmapi.c \
                          ft_split.c \
                          ft_strlcpy.c \
                          ft_putchar_fd.c \
                          ft_striteri.c \
                          

SRCS_BONUS :=   ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
                ft_lstsize_bonus.c \
                ft_lstlast_bonus.c \
                ft_lstadd_back_bonus.c \
                ft_lstdelone_bonus.c \
                ft_lstclear_bonus.c \
                ft_lstiter_bonus.c \
                ft_lstmap_bonus.c \

OBJS_BONUS   := $(SRCS_BONUS:.c=.o)

OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

################################################################################
#                                  Makefile  objs                              #
################################################################################


CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

INCLUDES    := libft.h

all:		${NAME}

${NAME}:	${OBJS} ${INCLUDES}
			@echo "$(GREEN)Creating ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			ar -rcs ${NAME} ${OBJS} ${INCLUDES}
			@echo "$(GREEN)$(NAME) created[0m ✔️"

bonus:		all ${OBJS_BONUS}
			@echo "$(GREEN)Creating ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			ar -rcs ${NAME} ${OBJS_BONUS}
			@echo "$(GREEN)$(NAME) created[0m ✔️"


clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

 run: 	 	${SRCS} ${SRCS_BONUS}
			@echo "$(GREEN)Running $(CYAN)$(NAME) $(CLR_RMV)...\n"
			@$(CC) $(FLAGS) -g ${SRCS} ${SRCS_BONUS} ${MAIN} -o main

# so:
# 	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRCS)
# 	gcc -nostartfiles -shared -o libft.so $(OBJS)

re:			fclean all

.PHONY:		all clean fclean re run
