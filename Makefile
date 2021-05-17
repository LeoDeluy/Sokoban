##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile
##

SRC	=	src/main.c\
		src/key_move.c\
		src/find.c\
		src/keep_storage.c\
		src/win.c\
		src/error_handling.c\
		src/lose.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

$(NAME):
	make -C ./lib/my
	gcc $(SRC) -o $(NAME) -lncurses -lm -L./lib/my -lmy

all:	$(NAME)

clean:
	rm -f $(OBJ)
	rm -f *~
	make fclean -C lib/my

fclean: clean
	rm -f $(NAME)

re:	fclean all
