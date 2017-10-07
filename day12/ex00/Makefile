# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xzeng <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/24 14:52:04 by xzeng             #+#    #+#              #
#    Updated: 2017/08/24 14:52:06 by xzeng            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_putstr.c ft_err.c ft_display_file.c
HEADER = ft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -I $(HEADER) -o $(NAME)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
