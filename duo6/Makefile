##
## EPITECH PROJECT, 2023
## lola
## File description:
## lala
##

SRC	=	main.c	\
		src/error_handling.c \
		src/get_tab_from_file.c \
		src/my_str_to_word_array_condition.c \
		src/init_struct.c \
		src/rand.c	\
		src/game_loop.c\
		src/print_mess.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	hangman

LIBSHELL =	-L./include/

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L -lmy $(LIBSHELL)

clean:
	rm $(OBJ)

fclean:
	rm $(NAME) -f
	rm $(OBJ) -f

re:	fclean all

.PHONY : all clean fclean re
