
NAME = ex02
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ clang++ -o $(NAME) $(CFLAGS) $(SRC)

# recompile when headers changed
%.o: %.cpp *.h *.hpp
	gcc $(CFLAGS) -o $@ -c $<

clean:
	@ rm -r $(OBJ)

fclean: clean
	@ rm -r $(NAME)

re: fclean all
