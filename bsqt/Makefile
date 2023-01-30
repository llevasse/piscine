# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llevasse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 16:56:27 by llevasse          #+#    #+#              #
#    Updated: 2022/08/24 17:12:05 by llevasse         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

DIR			= srcs/
FILES		= ft_atoi.c get_square.c list_func.c main.c print.c validate_map.c validate_map2.c
OBJS		= $(addprefix ${DIR}, ${FILES:.c=.o})

FLAGS		= -Wall -Wextra -Werror

NAME		= BSQ

INC			= ./includes/

.c.o:
			gcc ${FLAGS} -I ${INC} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			gcc -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -rf ${DIR}*.o

fclean:		clean
			rm ${NAME}
