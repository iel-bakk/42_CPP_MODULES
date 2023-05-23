# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/23 22:23:10 by iel-bakk          #+#    #+#              #
#    Updated: 2023/05/23 22:41:17 by iel-bakk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -std=c++98

CLASS = class/BitcoinExchange.hpp

NAME = btc

SRC = main.cpp src/BitcoinExchange.cpp
	

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME):$(OBJ) $(CLASS)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all