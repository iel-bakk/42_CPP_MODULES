# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/12 15:36:16 by iel-bakk          #+#    #+#              #
#    Updated: 2023/02/13 00:42:57 by iel-bakk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
EXEC = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXEC)
clean :
	rm -rf $(EXEC) $(OBJ)
fclean : clean

re : clean all
