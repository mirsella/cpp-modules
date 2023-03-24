# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 15:08:34 by lgillard          #+#    #+#              #
#    Updated: 2023/03/24 12:54:19 by mirsella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD
NAME = megaphone

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)
