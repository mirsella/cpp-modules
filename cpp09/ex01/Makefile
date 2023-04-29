# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 15:08:34 by lgillard          #+#    #+#              #
#    Updated: 2023/04/29 11:26:22 by mirsella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp RPN.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD
NAME = RPN

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)
