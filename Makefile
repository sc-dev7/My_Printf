##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## ok
##

SRC     =     *.c

OBJ     =     *.o

NAME    =     libmy.a

all:	$(NAME)

$(NAME):        $(OBJ)
	gcc -c $(SRC) && ar rc $(NAME) $(OBJ)
	rm *.o

clean:
	rm -f *.o

test: all
	cp $(NAME) main
	gcc main/main.c -L./main -lmy -g3


fclean: clean
	rm -f $(NAME)

re:	fclean all
