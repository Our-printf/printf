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
	char			*cp_str;
	int				t_int;
	unsigned	int	*t_unsi_int;
	char			*t_char;
	void			*t_void;
}					t_struct;

typedef	struct		s_print
{
	char			buf[BUFF_SIZE];
	int				i;
	int				j;
	int				save_i;
}					t_print;

typedef	struct		s_bool
{
	int				sharp	:	1;
	int				zero	:	1;
	int				neg		:	1;
	int				pos		:	1;
	int				space	:	1;
	int				j		:	1;
	int				z		:	1;
	int				check;
	int				point;
	int				width;
	int				h;
	int				l;
}					t_bool;

int					ft_printf(const char *str, ...);
int					ft_putstr_f(char const *s);
int					ft_itoa_f(int n);
int					stock_s(va_list ap, t_print res, t_bool bool_tab);
t_bool				check_flag(const char *str, t_bool bool_tab, t_print res, int a);
t_bool				init_bool(t_bool bool_tab);

#endif
