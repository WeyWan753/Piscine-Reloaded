# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pola <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 13:31:20 by pola              #+#    #+#              #
#    Updated: 2025/10/16 13:49:38 by pola             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEAD = includes

all : $(NAME)

$(NAME) : $(SRCS)
	gcc -I $(HEAD) -c $(SRCS) 
	ar rc $(NAME) $(OBJS)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
	
re : fclean all

