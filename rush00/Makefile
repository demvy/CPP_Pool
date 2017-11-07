
CC = clang++
FLAG = -Wall -Werror -Wextra -lncurses
NAME = ft_retro
SRCS = $(shell ls *.cpp)
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAG) $(OBJS) -o $@

%.o: %.c
	$(CC) $(FLAG) $(SRCS) -c -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re