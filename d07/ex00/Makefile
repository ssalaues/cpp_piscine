NAME	=	whatever
SRC		=	whatever.cpp
OBJ		=	$(SRC:.cpp=.o)
FLAGS	=	-Wall -Wextra -Werror
CC		=	clang++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) -o $@ -c $< $(FLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : re fclean clean all