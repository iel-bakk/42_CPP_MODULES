# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/02 20:16:34 by iel-bakk          #+#    #+#              #
#    Updated: 2023/03/09 18:59:44 by iel-bakk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = polymorphism

LIB = Dog.hpp Cat.hpp Animal.hpp Brain.hpp WrongCat.hpp WrongAnimal.hpp

SRC = main.cpp \
      Dog.cpp \
	  Cat.cpp \
	  Animal.cpp \
	  Brain.cpp \
	  WrongAnimal.cpp \
	  WrongCat.cpp

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ) $(LIB)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(LIB)
	$(CXX) $(CXXFLAGS) -c $< -o $@

re : clean $(NAME)

clean :
	rm -rf $(OBJ) $(NAME)

fclean : clean