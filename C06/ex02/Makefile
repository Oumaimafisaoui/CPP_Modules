CC = c++
RM = rm -rf
XFLAGS = -Wall -Wextra -Werror -std=c++98


SRC = Base.cpp main.cpp
OBJ = ${SRC:.cpp=.o}
NAME = base
LIB  = A.hpp B.hpp C.hpp Base.hpp

all : ${NAME}

${NAME} : ${OBJ} ${LIB}
		${CC} ${XFLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp ${LIB}
	${CC} ${XFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM}  ${NAME}

re: fclean all

.PHONY: clean fclean re all