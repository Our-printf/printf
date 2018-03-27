C = clang

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror 

LIBFT = libft

DIR_S = srcs

DIR_O = temporary

HEADER = include

<<<<<<< HEAD
SOURCES = ft_printf.c ft_putstr_f.c ft_itoa_f.c check_flag.c ft_stock_d_ft.c /
			ft_stock_d_ft2.c ft_stock_d.c ft_init_bool.c ft_stock_s.c /
			ft_strcat_f.c / ft_itoa_f.c ft_itoa.c
=======
SRCS = ./srcs/ft_check_flag.c srcs/ft_init_bool.c srcs/ft_itoa_f.c srcs/ft_printf.c srcs/ft_stock_s.c srcs/ft_strcat_f.c srcs/ft_stock_c.c #  srcs/ft_stock_d.c srcs/ft_stock_d_ft.c srcs/ft_stock_d_ft2.c 
>>>>>>> 6fada6f5fb9aea44b9e6c3062e1b2a549fecd3a6

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
