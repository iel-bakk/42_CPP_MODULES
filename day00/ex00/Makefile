# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/12 15:36:16 by iel-bakk          #+#    #+#              #
#    Updated: 2023/02/12 20:43:01 by iel-bakk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
Flags = -Wall -Wextra -Werror -std=c++98
EXEC = megaphone
SRC = ex00.cpp
OBJ = $(SRC:.cpp=.o)

all : $(OBJ)
	$(CC) $(Flags) $(OBJ) -o $(EXEC)
clean :
	rm -rf $(EXEC) $(OBJ)
fclean : clean

re : clean all