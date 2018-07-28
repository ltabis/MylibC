##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile for unit testing of my_printf
##

SRC_DIR=        $(realpath ../lib/my)

SRC=            $(wildcard ../lib/my/*.c)

SRC_UT_DIR=     $(realpath .)

SRC_UT=         $(SRC_UT_DIR)/unit_test_1.c	\
	$(SRC_UT_DIR)/unit_test_chained_lists.c	\
	$(SRC_UT_DIR)/unit_test_clean_str.c	\


OBJ=            $(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS=         -Wall -Wextra --coverage -I ../include

LDFLAGS=        -lcriterion -lgcov

NAME=           unit_tests

all:            $(NAME) run

$(NAME):        $(OBJ)
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)

run:	$(NAME)
		./unit_tests

clean:
		@rm -f $(OBJ)
		@find -type f -name '*.gcda' -delete
		@find -type f -name '*.gcno' -delete

fclean:         clean
		rm -f $(NAME)

re:             fclean all
