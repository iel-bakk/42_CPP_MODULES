# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 14:02:27 by iel-bakk          #+#    #+#              #
#    Updated: 2023/02/27 14:03:07 by iel-bakk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = a.out
LIB = Fixed.hpp
SRC =	Fixed.cpp \
		main.cpp 

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ) $(LIB)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(LIB)
	$(CXX) $(CXXFLAGS) -c $< -o $@

re : clean all

clean :
	rm -rf $(OBJ) $(NAME)
fclean : clean