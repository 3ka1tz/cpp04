NAME = cpp04_ex02

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp \
      Animal.cpp WrongAnimal.cpp \
	  Brain.cpp \
	  Cat.cpp Dog.cpp WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
