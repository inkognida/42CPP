# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hardella <hardella@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 11:37:29 by hardella          #+#    #+#              #
#    Updated: 2022/04/25 11:51:46 by hardella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean, flcean, name, all, re

NAME	= ser

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp

INC		= Data.hpp

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

