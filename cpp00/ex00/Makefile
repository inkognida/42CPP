.PHONY: clean, flcean, name, all, re

NAME	=	megaphone

SRCS	=	megaphone.cpp

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98 

REM		=	rm -f

all: $(NAME)

$(NAME): $(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
		$(REM) $(NAME)
	
fclean:
		$(REM) $(NAME)

re:	fclean all