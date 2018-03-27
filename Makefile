C = clang

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror 

LIBFT = libft

DIR_S = srcs

DIR_O = temporary

HEADER = include

SOURCES = ft_printf.c ft_putstr_f.c ft_itoa_f.c check_flag.c ft_stock_d_ft.c /
			ft_stock_d_ft2.c ft_stock_d.c ft_init_bool.c ft_stock_s.c /
			ft_strcat_f.c / ft_itoa_f.c ft_itoa.c

SRCS = $(addprefix $(DIR_S)/,$(SOURCES))

OBJS = $(addprefix $(DIR_O)/,$(SOURCES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(DIR_O)/%.o: $(DIR_S)/%.c
	@mkdir -p temporary
	@$(CC) $(FLAGS) -I $(HEADER) -o $@ -c $<

norme:
	norminette ./libft/
	@echo
	norminette ./$(HEADER)/
	@echo
	norminette ./$(DIR_S)/

clean:
	@rm -f $(OBJS)
	@rm -rf $(DIR_O)
	@make clean -C $(LIBFT)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT)

re: fclean all
