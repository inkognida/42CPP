# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hardella <hardella@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 16:28:55 by hardella          #+#    #+#              #
#    Updated: 2022/04/21 12:35:00 by hardella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean, flcean, name, all, re

NAME	= Form

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp Bureaucrat.cpp Form.cpp

INC		= Bureaucrat.hpp Form.hpp

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

