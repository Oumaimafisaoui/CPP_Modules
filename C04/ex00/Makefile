CC = c++
RM = rm -rf
XFLAGS = -Wall -Wextra -Werror -std=c++98


SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = ${SRC:.cpp=.o}
NAME = Animal
LIB  = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

all : ${NAME}

${NAME} : ${OBJ} ${LIB}
		${CC} ${XFLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp
	${CC} ${XFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM}  ${NAME}

re: fclean all

.PHONY: clean fclean re all