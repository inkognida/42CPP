# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hardella <hardella@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 09:43:50 by hardella          #+#    #+#              #
#    Updated: 2022/04/29 12:34:52 by hardella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean, flcean, name, all, re

NAME	= find

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp 

INC		= easyfind.hpp

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

