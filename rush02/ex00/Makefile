DIR			= srcs/
FILES		= check_value.c convert_checkers.c convert_number.c free_dict.c get_file_data.c get_thousands.c import_dict.c main.c print.c translate.c iswhitespace.c
OBJS		= $(addprefix ${DIR}, ${FILES:.c=.o})

FLAGS		= -Wall -Wextra -Werror

NAME		= rush-02

INC			= ./includes/

.c.o:
			@gcc ${FLAGS} -I ${INC} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			gcc -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -rf ${DIR}*.o

fclean:		clean
			rm ${NAME}

.PHONY:
			all clean fclean
