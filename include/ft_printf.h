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

typedef	struct		s_bool
{
	unsigned	int		sharp	:	1;
	unsigned	int		zero	:	1;
	unsigned	int		neg		:	1;
	int					pos;
	unsigned	int		space	:	1;
	unsigned	int		percent	:	1;
	unsigned	int		j		:	1;
	unsigned	int		z		:	1;
	int					check;
	int					point;
	int					width;
	int					h;
	int					l;
	char				c;
	unsigned	int		specs	:	1;
}						t_bool;

typedef	struct		s_print
{
	char			buf[BUFF_SIZE];
	int				i;
	int				k;
	int				save_i;
	t_bool			c_bool;
}					t_print;


int					ft_printf(const char *str, ...);
int					ft_putstr_f(char const *s);
char				*ft_itoa_f(int n);
t_print				stock_s(va_list ap, t_print res);
t_print				ft_stock_d(va_list ap, t_print res);
t_print				check_flag(const char *str, t_print res, int a);
t_print				init_bool(t_print res);
t_print				if_forest(char c, va_list ap, t_print res);
t_print				ft_strcat_f(char *s1, t_print res,char c);
//int					stock_d(va_list ap, t_print res);
void				test_s(void);

/* Pour le pourcent d*/
char				*ft_sign(char *str, t_print res, intmax_t rsl);
char				*ft_zero(char *str, t_print res);
int long long		ft_specs(t_print res, int long long va);
char				*ft_widht(char *str, t_print res);
t_print				ft_stock_dif(va_list ap, t_print res, int rsl);
char				*ft_point(char *str, t_print res);
char				*ft_negatif(char *str, t_print res);

#endif
