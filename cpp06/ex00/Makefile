# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hardella <hardella@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/24 12:21:04 by hardella          #+#    #+#              #
#    Updated: 2022/04/24 13:39:08 by hardella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean, flcean, name, all, re

NAME	= convert

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp Convert.cpp

INC		= Convert.hpp

OBJS	= $(SRCS:.cpp=.o)

REM		= rm -f

%.o : %.cpp
	$(CC) $(FLAGS) -c $<

all:	$(NAME)

$(NAME): $(INC) $(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
		$(REM) $(OBJS)

fclean:
		$(REM) $(OBJS) $(NAME)

re:		fclean all

