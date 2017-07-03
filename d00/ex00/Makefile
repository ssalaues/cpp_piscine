# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssalaues <ssalaues@student.42.us.org       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 11:45:47 by ssalaues          #+#    #+#              #
#    Updated: 2017/07/03 11:50:52 by ssalaues         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

HEADERS = includes

CXXFLAGS += -I$(HEADERS) -Wall -Werror -Wextra

FILESO =	megaphone.o\

all: $(NAME)

$(NAME): $(FILESO)
	$(CXX) -o $(NAME) $^ $(CXXFLAGS)

%.o: %.cpp
	$(CXX) -o $@ -c $< $(CXXFLAGS)

clean:
	rm -f $(FILESO)

fclean: clean
	rm -f $(NAME)

re: fclean all
