FLAGS		= -Wall -Wextra -Werror

FILES		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS		= ${FILES:.c=.o}

NAME		= libft.a

.c.o:
			gcc ${FLAGS} -I includes1 -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}
	
clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY: 	all	clean	fclean	re
