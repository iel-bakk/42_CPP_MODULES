# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/12 17:40:32 by iel-bakk          #+#    #+#              #
#    Updated: 2023/02/12 20:31:55 by iel-bakk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

Flags = -Wall -Wextra -Werror -std=c++98

SRC = Contact.cpp \
      phoneBook.cpp \
	  main.cpp

EXEC = PhoneBook

LIB = Contact.hpp PhoneBook.hpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME) $(OBJ) $(LIB)

$(NAME) : $(OBJ)
	$(CC) $(Flags) $(OBJ) -o $(EXEC)
clean :
	rm -rf $(EXEC) $(OBJ)
fclean : clean

re : clean all