# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 19:28:12 by rdias-ba          #+#    #+#              #
#    Updated: 2024/02/05 20:04:51 by rdias-ba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC  = megaphone.cpp
CC	 = c++
FLAGS=  -Wall -Wextra -Werror -std=c++98
OBJ  = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $< -o $@

%.o:	%.cpp
		$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re
		
		