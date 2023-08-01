#!/bin/sh

# -c: Compiles the code into object files (*.o).
gcc -c -Wall -Wextra -Werror ft_putchar.c ft_putstr.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# Creation of the library libft.a
# ar: This is the archiving (archive) utility.
#     It is used to create and manage archives containing object files,
#     often for the purpose of creating static libraries.
# r: If an object file with the same name already exists in the archive,
#     it will be replaced.
# c: If the archive already exists, this option ensures it is created
#     if it doesn't exist.
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# Indexing the library
ranlib libft.a

# Cleaning up object files
rm -f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
