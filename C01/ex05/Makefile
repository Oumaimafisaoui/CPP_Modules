CC= c++
XFLAGS =  -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC= main.cpp Harl.cpp 
OBJ= ${SRC:.cpp=.o}
LIB = Harl.hpp
NAME = harl

all : ${NAME}


${NAME} : ${LIB} ${OBJ}
	${CC} $(XFLAGS) $(OBJ) -o $(NAME)


%.o : %.cpp
	${CC} ${XFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME} ${OBJ}

re : fclean all

.PHONY : clean fclean re all 