# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-bakk <iel-bakk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 23:56:09 by iel-bakk          #+#    #+#              #
#    Updated: 2023/03/12 03:30:45 by iel-bakk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = SubForms

LIB =	Bureaucrat.hpp\
		AForm.hpp\
		PresidentialPardonForm.hpp\
		RobotomyRequestForm.hpp\
		ShrubberyCreationForm.hpp

SRC = main.cpp \
	  Bureaucrat.cpp \
	  AForm.cpp\
	  PresidentialPardonForm.cpp\
	  ShrubberyCreationForm.cpp\
	  RobotomyRequestForm.cpp

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