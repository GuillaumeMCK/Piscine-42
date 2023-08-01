NAME = libft.a

SRCS = srcs/ft_putchar.c \
            srcs/ft_swap.c \
            srcs/ft_putstr.c \
            srcs/ft_strlen.c \
            srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
INCLS = includes/

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all : ${NAME}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

.c.o:
	${CC} ${CFLAGS} -I ${INCLS} -c $< -o ${<:.c=.o}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re
