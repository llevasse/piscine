DIR			= srcs/
FILES	 	= do-op.c ft_atoi.c ft_func.c
OBJS		= $(addprefix ${DIR}, ${FILES:.c=.o})

FLAGS		= -Wall -Wextra -Werror

NAME		= do-op

.c.o:
			@gcc ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			gcc -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -rf ${DIR}*.o

fclean:		clean
			rm ${NAME}
