.PHONY: clean, flcean, name, all, re

NAME	= phonebook

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= PhoneBook.cpp Contact.cpp main.cpp

OBJS	= $(SRCS:.cpp=.o)

INC		= PhoneBook.hpp Contact.hpp

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

