C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = iter
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(C) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp *hpp
	$(C) $(CFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all