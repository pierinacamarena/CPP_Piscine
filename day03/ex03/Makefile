# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 12:25:00 by pierina           #+#    #+#              #
#    Updated: 2022/09/22 19:09:47 by pcamaren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	diamondTrap

SRCS	=	./main.cpp\
			./ScavTrap.cpp\
			./ClapTrap.cpp\
			./FragTrap.cpp\
			./DiamondTrap.cpp

OBJS	=	${SRCS:.c=.o}

CC		=	c++

CFLAGS	=	-Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98 

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