NAME = First_canon

SRC = ./sources/main.cpp ./sources/Fixed.cpp
INCLUDE = Makefile ./includes/Fixed.hpp 
OBJS = ${SRC:.cpp=.o}

CPP	= c++
RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

%o: %cpp ${INCLUDE}
	${CPP} ${FLAGS} -c $< -o $@

all: ${NAME}

$(NAME): ${OBJS}
	${CPP} ${FLAGS} -o $@ $^

run: all
	./${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re run