##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## task01 Day10
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME 	= 	libmy.a

CFLAGs=	-g -W -Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re:		fclean all
