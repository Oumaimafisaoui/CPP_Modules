CC= c++
XFLAGS =  -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC= main.cpp
OBJ= ${SRC:.cpp=.o}

NAME = replaceit

all : ${NAME}


${NAME} : ${OBJ}
	${CC} $(XFLAGS) $(OBJ) -o $(NAME)


%.o : %.cpp
	${CC} ${XFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME} ${OBJ}

re : fclean all

.PHONY : clean fclean re all 