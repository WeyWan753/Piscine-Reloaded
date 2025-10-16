NAME = ft_display_file

SRC = ft_display_file.c

OBJ = ft_display_file.o

all : $(NAME)

$(NAME) : $(SRC)
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc $(OBJ) -o $(NAME)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
