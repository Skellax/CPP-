NAME = megaphone
SRC = megaphone.cpp 
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98

GREEN =  '\033[92m'
RED = '\033[91m'
NONE = '\033[3m'


all: $(NAME)

$(NAME): $(SRC) $(OBJ)
	@echo $(GREEN) " --Loading-- " $(NONE) 
	@sleep 0.2
	@echo $(GREEN) "|#        |"
	@sleep 0.2
	@echo $(GREEN) "|##       |"
	@sleep 0.2
	@echo $(GREEN) "|###      |"
	@sleep 0.2
	@echo $(GREEN) "|####     |"
	@sleep 0.2
	@echo $(GREEN) "|#####    |"
	@sleep 0.2
	@echo $(GREEN) "|######   |"
	@sleep 0.2
	@echo $(GREEN) "|#######  |"
	@sleep 0.2
	@echo $(GREEN) "|######## |"
	@sleep 0.2
	@echo $(GREEN) "|#########|" $(NONE)
	@g++ $(FLAGS) $(SRC) -o $(NAME)
	@echo  $(GREEN) " $(NAME) was created !" $(NONE)

%.o: %.c
	g++ -c $(FLAGS) $< -o $@

clean:
	@echo $(RED) " --Deleting-- " $(NONE)
	@sleep 0.2
	@echo $(RED) "|#        |"
	@sleep 0.2
	@echo $(RED) "|##       |"
	@sleep 0.2
	@echo $(RED) "|###      |"
	@sleep 0.2
	@echo $(RED) "|####     |"
	@sleep 0.2
	@echo $(RED) "|#####    |"
	@sleep 0.2
	@echo $(RED) "|######   |"
	@sleep 0.2
	@echo $(RED) "|#######  |"
	@sleep 0.2
	@echo $(RED) "|######## |"
	@sleep 0.2
	@echo $(RED) "|#########|" $(NONE)
	@rm -rf $(OBJ)
	@echo $(RED) "objects was deleted" $(NONE)

fclean : clean 
	@echo $(RED) "Deleting --$(NAME)-- " $(NONE)
	@rm -rf $(NAME)
	@echo $(RED) "$(NAME) was deleted !" $(NONE)


re : fclean all 

test : all 
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."

.PHONY: all clean fclean re test 
