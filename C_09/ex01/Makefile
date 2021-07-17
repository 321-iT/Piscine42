# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/16 13:03:18 by ascotto-          #+#    #+#              #
#    Updated: 2021/07/16 13:03:20 by ascotto-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS 	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc
RM		= rm -f

CFLAGS	=  -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I includes

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
