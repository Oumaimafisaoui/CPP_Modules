CC = c++
RM = rm -rf
XFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp
OBJ = ${SRC:.cpp=.o}
NAME = Brain
LIB  = Animal.hpp Cat.hpp Dog.hpp Brain.hpp

all : ${NAME}

${NAME} : ${OBJ} ${LIB}
		${CC} -g ${XFLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp ${LIB}
	${CC} -g ${XFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM}  ${NAME}

re: fclean all

.PHONY: clean fclean re all