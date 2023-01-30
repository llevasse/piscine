FILES		= *.c

FLAGS		= -Wall -Wextra -Werror -fsanitize=address

NAME		= rush-02

${NAME}:
			gcc ${FLAGS} -o ${NAME} ${OBJS}	

all:		${NAME}

clean:
			rm -rf *.o

fclean:		clean
			rm ${NAME}

.PHONY:
			all clean fclean
