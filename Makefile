C = clang

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror -O2

LIBFT = libft

DIR_S = srcs

DIR_O = temporary

HEADER = include

SRCS = ./srcs/ft_check_flag.c srcs/ft_init_bool.c srcs/ft_itoa_f.c srcs/ft_printf.c srcs/ft_stock_s.c srcs/ft_strcat_f.c srcs/ft_stock_c.c #  srcs/ft_stock_d.c srcs/ft_stock_d_ft.c srcs/ft_stock_d_ft2.c 

#SRCS = $(addprefix $(DIR_S)/,$(SOURCES))

#OBJS = $(addprefix $(DIR_O)/,$(SOURCES:.c=.o))
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -I $(HEADER) -o $@ -c $<

norme:
	norminette ./libft/
	@echo
	norminette ./$(HEADER)/
	@echo
	norminette ./$(DIR_S)/

clean:
	rm -f $(OBJS)
	@make clean -C $(LIBFT)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT)

re: fclean all
