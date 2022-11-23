 DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m
RESET = \e[0m
BOLD = \e[1m

NAME = libft.a

SRC_DIR = srcs
OBJ_DIR = objs
INC_DIR = incs

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CFLAGS = -Wall -Werror -Wextra -I $(INC_DIR)

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir -p $@

$(NAME): $(OBJ)
	@printf "\r$(RED)$(BOLD)Protocol compiled.$(DEF_COLOR) "
	@$(AR) -rcs $@ $^

$(OBJ): $(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) -c $(CFLAGS) $< -o $@
	@printf "\r$(GREEN)$(BOLD)$< compiled.$(DEF_COLOR)     "

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY = all clean fclean re
