# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 15:29:17 by inazaria          #+#    #+#              #
#    Updated: 2024/05/13 15:31:50 by inazaria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES = display_file.c
OBJ_FILES = $(SRC_FILES:.c=.o)

NAME = ft_display_file
CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

.c.o : 
	cc $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

clean:
	$(RM) $(OBJ_FILES)

fclean: 
	$(RM) $(OBJ_FILES) $(NAME)

re: fclean all

.PHONY: all clean fclean re
