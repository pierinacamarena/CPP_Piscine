# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pierina <pierina@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 19:35:02 by pcamaren          #+#    #+#              #
#    Updated: 2022/09/30 10:09:52 by pierina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	iter

SRCS	=	./main.cpp

OBJS	=	${SRCS:.c=.o}

CC		=	c++

CFLAGS	=	-Wall -Werror -Wextra -std=c++98 

.c		:	.o
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}	:	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all		:	${NAME}

clean	:

fclean	:	clean
			rm -rf ${NAME}
			$(MAKE) -C . clean

re	:	fclean all

.PHONY	:	all clean fclean re