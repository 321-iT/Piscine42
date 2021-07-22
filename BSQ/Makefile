# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/22 09:50:04 by ascotto-          #+#    #+#              #
#    Updated: 2021/07/22 10:01:14 by ascotto-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = bsq
SRCS = ft_check_tab_split.c ft_filedup.c ft_joinRobin.c ft_solve.c func_basics.c main.c ft_check_str.c ft_display.c ft_init_tab.c ft_put_answer.c ft_split.c func_basics_02.c

OBJS = 		${SRCS:.c=.o}

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I .

${NAME}:	${OBJS}
				${CC} -o ${NAME} ${OBJS}
clean:
			rm -f ${OBJS}
fclean:		clean
			rm -f ${NAME}
re:			fclean all
