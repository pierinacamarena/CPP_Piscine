# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 00:40:07 by pcamaren          #+#    #+#              #
#    Updated: 2022/09/29 20:31:50 by pcamaren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	theForms

SRCS	=	./main.cpp\
			./Bureaucrat.cpp\
			./Form.cpp\
			./PresidentialPardonForm.cpp\
			./RobotomyRequestForm.cpp\
			./ShruberryCreationForm.cpp

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

