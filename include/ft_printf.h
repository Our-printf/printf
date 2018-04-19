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

typedef	struct			s_bool
{
	unsigned	int		sharp	:	1;
	unsigned	int		zero	:	1;
	unsigned	int		neg		:	1;
	int					pos;
	unsigned	int		space	:	1;
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
	char			*tmp;
	int				len;
	char			buf[BUFF_SIZE];
	int				i;
	int				k;
	int				save_i;
	int				length;
	t_bool			c_bool;
}					t_print;

int					ft_printf(const char *str, ...);
int					ft_putstr_f(char const *s);
t_print				distrib(const char *str, va_list ap, t_print res);
char				*ft_itoa_f(int n);
t_print				check_flag(const char *str, t_print res, int a);
t_print				init_bool(t_print res);
t_print				if_forest(char c, va_list ap, t_print res);
t_print				ft_strcat_f(char *s1, t_print res,char c);
t_print				check_true(char c, t_print res);

/* Pour le pourcent d*/
char				*ft_sign(char *str, t_print res, intmax_t rsl);
char				*ft_widht(char *str, t_print res);
char				*ft_point(char *str, t_print res);
char				*ft_negatif(char *str, t_print res);
char				*ft_zero2(char *str, t_print res);
char				*ft_zero3(char *str, t_print res, int cn);
char				*ft_itoa_cast(intmax_t n);
t_print				ft_rsl_zero(t_print res, int rsl);
char				*ft_sign_zero(char *str, t_print res, intmax_t rsl);
char				*ft_sign_zero2(char *str);
char				*ft_widht_zero(char *str, t_print res);
char				*ft_point_zero(char *str, t_print res);
char				*ft_sign_zero2(char *str);
char				*ft_sign_zero(char *str, t_print res, intmax_t rsl);
t_print				ft_stock_dif(t_print res, int rsl, char *stock);
intmax_t			ft_specs(t_print res, intmax_t va);
char				*ft_zero(char *str, t_print res, int cn);
char				*ft_sign2(char *str, t_print res, char *s);
char				*ft_sign3(char *str, t_print res, int rsl, int i);
t_print				ft_stock_d2(t_print res, int rsl, long long va);
t_print				ft_stock_d(va_list ap, t_print res, int rsl, long long va);
char				*ft_strdup_l(char *s1);

/* Pour le pourcent s */
char				*width_neg(char *copy, char c, int w);
char				*width_s2(char *copy, char c, int w, int len);
char				*preci_s(char *tmp, t_print res);
char				*width_s(char *tmp, t_print res);
t_print				stock_s(va_list ap, t_print res);
t_print				stock_ls(va_list ap, t_print res, int i);
t_print				strcat_point_static(t_print res, char c, int size);
char				*preci_ls(char *copy, t_print res);
t_print				width_ls(char *tmp, t_print res);
char				*s_unicode_2_octets(int unicode, char *uni, int i);
char				*s_unicode_3_octets(int unicode, char *uni, int i);
char				*s_unicode_4_octets(int unicode, char *uni, int i);
char				*print_s_unicode(int n, t_print res, char *uni);
char				*mall_size_of_s_unicode(wchar_t *tmp);

/* Pour le pourcent c */
t_print				stock_c(va_list ap, t_print res);
t_print				stock_lc(va_list ap, t_print res);
t_print				strcat_c(char *str, t_print res, char c);
char				*width_c(char *copy, char c, int w);
t_print				function_c(char c, t_print res);
t_print				size_of_unicode(int n, t_print res);
t_print				print_width(t_print res, int nb);
t_print				unicode_2_octets(t_print res, int unicode);
t_print				unicode_3_octets(t_print res, int unicode);
t_print				unicode_4_octets(t_print res, int unicode);

// Pour le pourcent % 
t_print				stock_percent(t_print res);
t_print				strcat_percent(char *str, t_print res);
char				*width_percent(char *copy, char c, int w);

/*Main de test */
void				test_s(void);
void				test_c(void);
void				test_per(void);
void				test_lc(void);
void				test_ls(void);
void				test_d(void);

#endif
