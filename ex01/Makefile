NAME = phonebook

SRC = Contact.cpp PhoneBook.cpp main.cpp

OBJ = ${SRC:.cpp=.o}

COMP = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o:%.cpp
	$(COMP) -c $< -o $@

$(NAME): $(OBJ)
	$(COMP) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all