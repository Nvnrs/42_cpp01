CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Moar_brainz
SRCS = main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re