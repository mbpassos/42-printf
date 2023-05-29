# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 20:22:41 by mbrito-p          #+#    #+#              #
#    Updated: 2023/05/22 20:22:41 by mbrito-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	ft_printf.c	ft_print_single_char.c	ft_print_string.c \
		ft_print_dec_base.c	ft_print_uns_dec_base.c ft_print_hex_base.c \
		ft_print_ptr.c			

OBJS = ${SRC:.c=.o}

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -gdwarf-4
INCLUDE = -I .
CL = ar -rc
RL = ar -s
	
.o:.c
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME):		${OBJS}
		${CL}	${NAME}	${OBJS}
		${RL}	${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM}	${NAME}

tclean: clean
	${RM} teste

re: fclean all

teste:
		${CC} ${CFLAGS} ${INCLUDE} main.c ${NAME} -o teste

.PHONY: all clean fclean re 