
NAME = contactBook
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp Contact.class.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ clang++ -o $(NAME) $(CFLAGS) $(SRC)

# recompile when headers changed
%.o: %.cpp *.h *.hpp
	gcc $(CFLAGS) -o $@ -c $<

clean:
	@ rm -rf $(OBJ)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all
