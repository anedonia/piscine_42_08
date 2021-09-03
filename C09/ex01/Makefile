SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

INCLUDES = includes/ft.h

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = gcc

CFLAGS =  -Wall -Wextra -Werror

.c.o:
	${CC} ${FLAGS} -I includes -c $< -o ${<:.c=.o}

all :	${NAME}

${NAME} :	${OBJS}
	ar rc ${NAME} ${OBJS}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
