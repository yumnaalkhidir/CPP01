CXX			:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98
NAME		:= violance
FILES		:= main.cpp \
				Weapon.cpp \
				HumanA.cpp \
				HumanB.cpp
OBJ			:= $(FILES:.cpp=.o)
HEADERS		:= Weapon.hpp \
				HumanA.hpp \
				HumanB.hpp
all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean