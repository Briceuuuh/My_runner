##
## EPITECH PROJECT, 2021
## makefile
## File description:
## filedescription
##

SRC = load_window.c \
	window.c \
	my_putstr.c \
	load_guy.c

OBJ = $(SRC:.c=.o)

IFLAGS = -I ../../include

NAME = libmy.a

all:
	gcc -c $(SRC) $(IFLAGS)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
