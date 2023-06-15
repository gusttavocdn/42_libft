TARGET = tests
SRC_FILES = $(wildcard *.c)
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
INCLUDE = libft.h
SRC_FUNCTIONS = ../*.c

all: ${TARGET}

${TARGET}: ${SRC_FILES}
	${CC} ${CFLAGS} ${SRC_FILES} ${SRC_FUNCTIONS} ../${INCLUDE} -o ${TARGET}

run: all ${TARGET}
	@echo "RUNNING TESTS..."
	@./${TARGET}

clean:
	${RM} ${TARGET}

re: clean all

.PHONY: clean all  re run
