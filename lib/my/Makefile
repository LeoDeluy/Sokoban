##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile that compiles my libmy
##

SRC	=	my_getnbr.c \
		my_putchar.c \
		my_put_nbr.c \
		my_putstr.c \
		my_revstr.c \
		my_strcat.c \
		my_strcpy.c \
		my_strlen.c \
		my_strncat.c \
		my_strncpy.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all
