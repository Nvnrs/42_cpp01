CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Unnecessary_violence
SRCS = main.cpp \
		Weapon.cpp \
		HumanB.cpp \
		HumanA.cpp \

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