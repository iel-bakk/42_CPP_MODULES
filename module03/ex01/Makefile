# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 17:22:37 by iel-bakk          #+#    #+#              #
#    Updated: 2023/03/01 20:58:42 by iel-bakk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Scav
LIB = ScavTrap.hpp ClapTrap.hpp
SRC =	ClapTrap.cpp \
		ScavTrap.cpp \
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