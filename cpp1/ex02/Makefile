NAME = ex02
SRC = main.cpp
FLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME) 

$(NAME) : $(SRC)
	c++ $(FLAGS) $(SRC) -o $@

clean :

fclean : clean
	rm -rf $(NAME)

re : fclean all