NAME = Harl
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98

GREEN = '\033[92m'
RED = '\033[91m'
NONE = '\033[3m'

all: $(NAME)

$(NAME): $(SRCS) $(OBJS)
	@echo $(GREEN) "--Loading--" $(NONE)
	@sleep 0.2
	@echo $(GREEN) "|#         |"
	@sleep 0.2
	@echo $(GREEN) "|##        |"
	@sleep 0.2
	@echo $(GREEN) "|###       |"
	@sleep 0.2
	@echo $(GREEN) "|####      |"
	@sleep 0.2
	@echo $(GREEN) "|#####     |"
	@sleep 0.2
	@echo $(GREEN) "|######    |"
	@sleep 0.2
	@echo $(GREEN) "|#######   |"
	@sleep 0.2
	@echo $(GREEN) "|########  |"
	@sleep 0.2
	@echo $(GREEN) "|######### |"
	@sleep 0.2
	@echo $(GREEN) "|##########|" $(NONE)
	@g++ $(FLAGS) $(SRCS) -o $(NAME)
	@echo $(GREEN) "$(NAME) was created ! " $(NONE)

%o: %.c
	g++ -c $(FLAGS) $< -o $@

clean:
	@echo $(RED) "-- Deleting-- " $(NONE)
	@sleep 0.2
	@echo $(RED) "|#         |"
	@sleep 0.2
	@echo $(RED) "|##        |"
	@sleep 0.2
	@echo $(RED) "|###       |"
	@sleep 0.2
	@echo $(RED) "|####      |"
	@sleep 0.2
	@echo $(RED) "|#####     |"
	@sleep 0.2
	@echo $(RED) "|######    |"
	@sleep 0.2
	@echo $(RED) "|#######   |"
	@sleep 0.2
	@echo $(RED) "|########  |"
	@sleep 0.2
	@echo $(RED) "|######### |"
	@sleep 0.2
	@echo $(RED) "|##########|" $(NONE)
	@ rm -rf $(OBJS)
	@echo $(RED) "Objects was deleted" $(NONE)

fclean: clean
	@echo $(RED) "Deleting --$(NAME)-- " $(NONE)
	@rm -rf $(NAME)
	@echo $(RED) "$(NAME) was deleted !" $(NONE)

re: fclean all

.PHONY: all clean fclean re