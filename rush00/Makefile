# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/31 13:02:49 by vdemeshk          #+#    #+#              #
#    Updated: 2017/10/31 13:02:58 by vdemeshk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro
CFLAGS = -Wall -Wextra
SRC = main.cpp Game.cpp Bullet.cpp Object.cpp Player.cpp
 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -o $(NAME) $(CFLAGS) $(SRC) -lncurses

# recompile when headers changed
%.o: %.cpp %.hpp
	clang++ $(CFLAGS) -o $@ -c $<

clean:
	@ rm -rf $(OBJ)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all
