NAME = do-op
CC = gcc
CFLAGS = -Wall -Wextra -Werror
C_FILES = *.c
O_FILES = ${C_FILES:.c=.o}
H_FILES = functions.h

all: ${NAME}

${O_FILES}: ${C_FILES}
	${CC} -c $^

${NAME}: ${O_FILES}
	${CC} ${CFLAGS} -o $@ $^ -I ${H_FILES}

clean:
	/bin/rm -f ${O_FILES}

fclean: clean
	/bin/rm ${NAME}

re: fclean all
