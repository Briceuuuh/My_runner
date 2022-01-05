##
## EPITECH PROJECT, 2021
## MakeFile
## File description:
## Makefile
##

SRC = my_runner.c

NAME = my_runner

CFLAGS = -W -Wall -Werror -Wextra
IFLAGS = -I ./include -I ./lib/my
LFLAGS = -L lib/my -lmy
FLAGSCSFML = -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all: $(NAME)

$(NAME):
	make -C ./lib/my all
	gcc -o $(NAME) $(CFLAGS) $(IFLAGS) $(SRC) $(LFLAGS) $(FLAGSCSFML)

clean:
	make -C ./lib/my clean
	rm -f *~

val:
	gcc -o $(NAME) $(CFLAGS) $(IFLAGS) $(SRC) $(LFLAGS) -g3

fclean: clean
	make -C ./lib/my fclean
	rm -f $(NAME)

re : fclean all
	make -C ./lib/my re
