CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = bsq
SRC_PATH = srcs

SRCS = $(SRC_PATH)/file.c \
       $(SRC_PATH)/main.c \
       $(SRC_PATH)/parser.c \
       $(SRC_PATH)/parser2.c \
       $(SRC_PATH)/parser3.c \
       $(SRC_PATH)/solve.c \
       $(SRC_PATH)/utils.c \
       $(SRC_PATH)/utils2.c \

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
