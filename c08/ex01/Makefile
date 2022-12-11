CC = c++
RM = rm -rf
XFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Span.cpp
OBJ = ${SRC:.cpp=.o}
NAME = Span
LIB  = Span.hpp

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