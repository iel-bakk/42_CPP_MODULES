# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-bakk < iel-bakk@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/12 17:40:32 by iel-bakk          #+#    #+#              #
#    Updated: 2023/02/12 20:42:11 by iel-bakk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
Flags = -Wall -Wextra -Werror -std=c++98
SRC = Contact.cpp \
      phoneBook.cpp \
	  main.cpp

EXEC = phoneBook

OBJ = $(SRC:.cpp=.o)

all : $(OBJ)
	$(CC) $(Flags) $(OBJ) -o $(EXEC)
clean :
	rm -rf $(EXEC) $(OBJ)
fclean : clean

re : clean all