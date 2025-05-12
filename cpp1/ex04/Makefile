NAME = Replace
SRC = main.cpp 
OBJ = $(SRC.cpp=.o)
FLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME) 

$(NAME) : $(SRC)
	c++ $(FLAGS) $(SRC) -o $@

$(OBJ) : $(SRC)
	c++ $(FLAGS) -c $(SRC)

clean :

fclean : clean
	rm -rf $(NAME)

re : fclean all