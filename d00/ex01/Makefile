# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssalaues <ssalaues@student.42.us.org       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 11:45:47 by ssalaues          #+#    #+#              #
#    Updated: 2017/07/03 11:56:13 by ssalaues         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

HEADERS = includes

CXXFLAGS += -I$(HEADERS) -Wall -Werror -Wextra

FILESO =	main.o	\
		Book.class.o \

all: $(NAME)

$(NAME): $(FILESO)
	clang++ -o $(NAME) $^ $(CXXFLAGS)

%.o: %.cpp
	clang++ -o $@ -c $< $(CXXFLAGS)

clean:
	rm -f $(FILESO)

fclean: clean
	rm -f $(NAME)

re: fclean all
