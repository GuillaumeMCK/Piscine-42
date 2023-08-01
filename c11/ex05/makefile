CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = do-op

SRCS = main.c  \
		ft_putnbr.c \
		ft_putstr.c \
		ft_operators.c \
		ft_atoi.c

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
