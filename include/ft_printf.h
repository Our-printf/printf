/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 13:54:30 by sgarcia           #+#    #+#             */
/*   Updated: 2018/04/28 14:11:12 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include <stdio.h>
# ifndef BUFF_SIZE
#  define BUFF_SIZE 32
# endif

typedef	struct		s_bool
{
	unsigned int	sharp : 1;
	unsigned int	zero : 1;
	unsigned int	neg :1;
	int				pos;
	unsigned int	space : 1;
	unsigned int	j : 1;
	unsigned int	z : 1;
	int				check;
	int				point;
	int				width;
	int				h;
	int				l;
	char			c;
	unsigned int	specs : 1;
}					t_bool;

typedef	struct		s_print
{
	char			*tmp;
	int				len;
	char			buf[BUFF_SIZE];
	int				i;
	int				k;
	int				save_i;
	int				length;
	int				length_write;
	t_bool			c_bool;
}					t_print;

int					ft_printf(const char *str, ...);
t_print				check_flag(const char *str, t_print res, int i);
t_print				flag(const char *str, t_print res);
t_print				flag_relou(const char *str, t_print res);
t_print				init_bool(t_print res);
t_print				init_struct(t_print res);
char				*width(char *str, int size, int index, char c);
void				itoa_base_min(uintmax_t value, unsigned int base,
		char *str, int *i);
void				itoa_base_static(intmax_t value, int base, char *str,
		int *i);
void				itoa_base_maj(uintmax_t value, unsigned int base,
		char *str, int *i);
t_print				strcat_c(char *str, t_print res, char c);
t_print				stock_c(va_list ap, t_print res);
t_print				function_c(char c, t_print res);
char				*width_c(char *copy, char c, int w);
t_print				ft_stock_d(va_list ap, t_print res, intmax_t rsl,
		long long va);
t_print				sort_intmax(char *str, t_print res, intmax_t va,
		int *index);
int					nbr_len_int(intmax_t nbr, t_print res);
int					nbr_len2(intmax_t nbr, int base);
void				strcat_width(char *str, int len, char c, int *index);
t_print				strcat_buff(char *str, t_print res);
intmax_t			ft_specs_int(t_print res, intmax_t va);
t_print				stock_lc(va_list ap, t_print res);
t_print				size_of_unicode(int n, t_print res);
t_print				unicode_3_octets(t_print res, int unicode);
t_print				unicode_4_octets(t_print res, int unicode);
t_print				unicode_2_octets(t_print res, int unicode);
t_print				stock_ls(va_list ap, t_print res, int i);
char				*mall_size_of_s_unicode(wchar_t *tmp);
char				*s_unicode_4_octets(int unicode, char *uni, int i);
char				*s_unicode_3_octets(int unicode, char *uni, int i);
char				*s_unicode_2_octets(int unicode, char *uni, int i);
char				*print_s_unicode(int n, t_print res, char *uni);
t_print				width_ls(char *tmp, t_print res);
char				*preci_ls(char *copy, t_print res);
t_print				strcat_point_static(t_print res, char c, int size);
t_print				print_width(t_print res, int nb);
uintmax_t			ft_specs(t_print res, uintmax_t va);
t_print				ft_stock_lx(va_list ap, t_print res, uintmax_t rsl,
		unsigned long long va);
t_print				ft_stock_o(va_list ap, t_print res, uintmax_t rsl,
		unsigned long long va);
t_print				ft_stock_p(va_list ap, t_print res, uintmax_t rsl,
		unsigned long long va);
t_print				stock_percent(t_print res);
char				*width_percent(char *copy, char c, int w);
t_print				strcat_percent(char *str, t_print res);
char				*width_s(char *tmp, t_print res);
t_print				stock_s(va_list ap, t_print res);
char				*preci_s(char *tmp, t_print res);
char				*width_neg(char *copy, char c, int w);
char				*width_s2(char *copy, char c, int w, int len);
t_print				ft_stock_x(va_list ap, t_print res, uintmax_t rsl,
		unsigned long long va);
t_print				ft_strcat_f(char *s1, t_print res, char c);
t_print				ft_clean(t_print res);
t_print				ft_stock_u(va_list ap, t_print res, intmax_t rsl,
		intmax_t va);
t_print				ft_stock_lu(va_list ap, t_print res, intmax_t rsl,
		uintmax_t va);
void				sort_order_posi(char *str, t_print res,
		intmax_t va, int len);
void				sort_order_negi(char *str, t_print res,
		intmax_t va, int len);
char				*ft_itoa_cast(unsigned long n, char *p,
		int *a, t_print res);
char				*ft_itoa_cast_lu(uintmax_t n, char *p, int *a,
		t_print res);
void				sort_order_zeroi(char *str, t_print res,
		intmax_t va, int len);

#endif
