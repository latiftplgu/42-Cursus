NAME = so_long
OBJECTS = $(shell find ./ -name "*.o")
A = $(shell find ./ -name "*.a")
CC = gcc

FLAGS = -framework OpenGL  -framework AppKit -L./minilibx -lmlx -g

CFILES = $(shell find . -name "*.c")
	
all:
	@make -C ./libft
	@make -C ./ft_printf
	@make -C ./minilibx
	$(CC) ./src/*.c ./libft/libft.a  ./ft_printf/libftprintf.a  $(FLAGS) -o so_long

clean:
	@rm -f $(OBJECTS)
	@echo $(R)Removed [$(OBJECTS)]$(X)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(A)
	@echo $(R)Removed [$(NAME)]$(X)

re: fclean all

norm:
	@echo $(B)[--NORMINETTE SUCCES %100 CLEAN CODE...]$(B)
	norminette $(shell find ./src/ -name "*.c")

.PHONY: all clean fclean re