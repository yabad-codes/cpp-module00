NAME = phonebook

SRC = Contact.cpp PhoneBook.cpp main.cpp

OBJ = Contact.o PhoneBook.o main.o

COMP = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(COMP) -c $(SRC)
	$(COMP) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all