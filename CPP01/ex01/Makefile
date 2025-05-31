# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/25 02:59:33 by yabenman          #+#    #+#              #
#    Updated: 2025/06/01 00:55:02 by yabenman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEF_COLOR = \033[0;39m
GREEN     = \033[0;32m
RED       = \033[0;31m
CYAN      = \033[0;36m
PURPLE    = \033[0;35m


NAME = 

SRC = 

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "$(GREEN)[✔] Compiled $(NAME) successfully.$(DEF_COLOR)"
	@echo ""
	@echo "$(PURPLE)   ██████  ██████  ██████  $(DEF_COLOR)"
	@echo "$(PURPLE)  ██       ██   ██ ██   ██ $(DEF_COLOR)"
	@echo "$(PURPLE)  ██       ██████  ██████  $(DEF_COLOR)"
	@echo "$(PURPLE)  ██       ██      ██      $(DEF_COLOR)"
	@echo "$(PURPLE)   ██████  ██      ██      $(DEF_COLOR)"
	@echo "$(CYAN)                           $(DEF_COLOR)"
	@echo "$(CYAN) CPP project compiled!$(DEF_COLOR)"

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re