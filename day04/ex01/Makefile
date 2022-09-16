# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pierina <pierina@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 11:37:11 by pierina           #+#    #+#              #
#    Updated: 2022/09/16 11:01:31 by pierina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	animalBrain

SRCS	=	./main.cpp\
			./Animal.cpp\
			./Cat.cpp\
			./Dog.cpp\
			./Brain.cpp

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

