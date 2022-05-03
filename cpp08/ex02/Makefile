# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hardella <hardella@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/29 12:43:48 by hardella          #+#    #+#              #
#    Updated: 2022/04/29 12:52:29 by hardella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean, flcean, name, all, re

NAME	= mutant

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp

INC		= MutantStack.hpp

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

