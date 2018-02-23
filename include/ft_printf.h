#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "../libft/libft.h"
#include <stdio.h>
#ifndef BUFF_SIZE
# define BUFF_SIZE 4096
#endif

typedef	struct		s_struct
{
	char			*tmp;
	char			*cp_format;
	int				t_int;
	unsigned int	*t_unsi_int;
	char			*t_char;
	void			*t_void;
}					t_struct;

typedef	struct		s_print
{
	char	text[BUFF_SIZE];
	int		i;
	int		j;
}					t_print;

typedef	struct		s_bool
{
	int	sharp	:	1;
	int	zero	:	1;
	int	neg		:	1;
	int	pos		:	1;
	int	space	:	1;
	int	j		:	1;
	int	z		:	1;
	int	h;
	int	l;
	int	point;
	int	width;
}					t_bool;

int				ft_printf(const char *format, ...);
int				ft_putstr_f(char const *s);
int				ft_itoa_f(int n);
int				ft_check_flag(const char *format, int *i);
int				ft_stock_s(const char *format, va_list ap, t_struct *tmp);
#endif
