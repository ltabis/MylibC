##
## Makefile
## Library compilation
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME 	= 	libmy.a

CFLAGS  =	-iquote ../../include -g -W -Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re:		clean fclean all
