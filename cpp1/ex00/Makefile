NAME = Zombie
SRCS = main.cpp  Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRCS.cpp=.o)
FLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(FLAGS) $(SRCS) $(OBJ) -o $(NAME)

$(OBJ) : $(SRCS)
	c++ $(FLAGS) $(SRCS) $(OBJ) -c $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all