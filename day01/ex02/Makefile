# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 19:35:22 by pcamaren          #+#    #+#              #
#    Updated: 2022/09/01 21:17:10 by pcamaren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	hiThisIsBrain
			
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