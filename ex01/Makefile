# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/16 13:35:50 by rdias-ba          #+#    #+#              #
#    Updated: 2024/02/16 15:30:54 by rdias-ba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDE = -I ./headers
VPATH = srcs
RM = rm -rf

NAME = Phonebook
SRCS = main.cpp Contact.cpp PhoneBook.cpp

OBJ_DIR = objs
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR):
	mkdir -p objs

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re run