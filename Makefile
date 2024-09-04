##
## EPITECH PROJECT, 2024
## make
## File description:
## make
##
NAME	=	libmyncurses.a

SRC		=	init.c				\
			activate_color.c	\
			create_color.c		\
			getline.c			\
			print_with_color.c

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-fPIC

all: $(OBJ)
	gcc -shared -o $(NAME) $(OBJ) -lncurses

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
