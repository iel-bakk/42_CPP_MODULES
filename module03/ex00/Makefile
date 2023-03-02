# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 17:22:37 by iel-bakk          #+#    #+#              #
#    Updated: 2023/03/01 17:23:31 by iel-bakk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ClapTrap
LIB = ClapTrap.hpp
SRC =	ClapTrap.cpp \
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