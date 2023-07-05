SRC = megaphone.cpp

OBJS = $(SRC:.c=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

all:	$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re