CC = C++
RM = rm -rf
XFLAGS = -Wall -Wextra -Werror -std=c++98


SRC = HumanA.cpp main.cpp Weapon.cpp HumanB.cpp
OBJ = ${SRC:.cpp=.o}
NAME = ./weapon
LIB  = HumanA.hpp Weapon.hpp HumanB.hpp

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