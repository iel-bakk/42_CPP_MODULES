# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 01:11:25 by iel-bakk          #+#    #+#              #
#    Updated: 2023/05/20 17:36:54 by iel-bakk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

CLASS = class/Base.hpp class/A.hpp class/B.hpp class/C.hpp

NAME = identify

SRC = src/Base.cpp src/A.cpp src/B.cpp src/C.cpp main.cpp

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