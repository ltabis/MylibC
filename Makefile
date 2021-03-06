##
## Makefile
## Library and tests compilation for the MyLibC project
##

COM_COLOR=	\033[0;34m
OBJ_COLOR= 	\033[0;36m
OK_COLOR=	\033[0;32m
ERROR_COLOR=	\033[0;31m
WARN_COLOR=	\033[0;33m
NO_COLOR=	\033[m

OK=	"[OK]"
ERROR=	"[ERROR]"
WARN=	"[WARNING]"
COM=	"Compiling"

SRC=	test.c
OBJ=	$(SRC:.c=.o)
NAME= 	project_name
CFLAGS=	-iquote include -Llib -lmy -g -W -Wall -Wextra

all:	library main

library:
	@cd lib && $(MAKE)
	@echo -e "$(OK_COLOR)"$(OK) "$(COM_COLOR)""Library compilation finished !" "$(NO_COLOR)"

main: 	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)
	@echo -e "$(OK_COLOR)"$(OK) "$(COM_COLOR)""Compilation finished !" "$(NO_COLOR)"

tests_run:
	@cd tests/ && $(MAKE)

clean:
	@$(RM) -f $(OBJ)
	@find -type f -name '*~' -delete
	@find -type f -name '#*#' -delete
	@find -type f -name '*.gcda' -delete
	@find -type f -name '*.gcno' -delete
	cd lib && make fclean
	@echo -e "$(OK_COLOR)"$(OK) "$(COM_COLOR)""Repository cleaned !" "$(NO_COLOR)"

fclean:	clean
	@$(RM) -f $(NAME)

re: fclean all

.PHONY:	library main tests_run clean fclean re
