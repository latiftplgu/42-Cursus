NAME =  libftprintf.a

SRCS = $(wildcard *.c)

GREEN = \033[0;92m

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc

RM = rm -f

all: $(NAME)
	@echo "\033[0;91m\nProgram checking..."
	@echo "\033[0;96mFinished.."

$(NAME): $(OBJS)
	@echo "\033[0;93m"
	ar rc $(NAME) $(OBJS)

clean:
	@echo "$(GREEN)Loading..."
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:		fclean all

.PHONY: clean re fclean all
