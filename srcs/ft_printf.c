/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 13:24:41 by sgarcia           #+#    #+#             */
/*   Updated: 2018/04/28 11:48:49 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	t_print		if_forest2(char c, va_list ap, t_print res)
{
	if (c == 'x' || c == 'X')
	{
		if (c == 'x')
			res = ft_stock_x(ap, res, 0, 0);
		if (c == 'X')
			res = ft_stock_lx(ap, res, 0, 0);
	}
	if (c == '%')
		res = stock_percent(res);
	res.c_bool.j = 1;
	res.c_bool.specs = 1;
	if (c == 'D')
		res = ft_stock_d(ap, res, 0, 0);
	if (c == 'p')
	{
		res.c_bool.sharp = 1;
		res = ft_stock_p(ap, res, 0, 0);
	}
	res.c_bool.h = 0;
	if (c == 'O')
		res = ft_stock_o(ap, res, 0, 0);
	return (res);
}

static	t_print		if_forest(char c, va_list ap, t_print res)
{
	res.length++;
	if (c == 's' || c == 'S')
	{
		if (res.c_bool.l == 2 || c == 'S')
			res = stock_ls(ap, res, 0);
		else
			res = stock_s(ap, res);
	}
	if (c == 'd' || c == 'i')
		res = ft_stock_d(ap, res, 0, 0);
	if (c == 'c' || c == 'C')
	{
		if (res.c_bool.l == 2 || c == 'C')
			res = stock_lc(ap, res);
		else
			res = stock_c(ap, res);
	}
	if (c == 'o')
		res = ft_stock_o(ap, res, 0, 0);
	if (c == 'u')
		res = ft_stock_u(ap, res, 0, 0);
	if (c == 'U')
		res = ft_stock_lu(ap, res, 0, 0);
	res = if_forest2(c, ap, res);
	return (res);
}

static	t_print		check_true(char c, t_print res)
{
	char	*str;

	if (res.c_bool.width == 0)
	{
		res.length++;
		return (res);
	}
	str = ft_memalloc(res.c_bool.width);
	if (res.c_bool.neg == 1 && res.c_bool.width != -1)
		res.c_bool.width++;
	if (res.c_bool.zero == 1)
		str = width(str, res.c_bool.width - 1, 0, '0');
	if (res.c_bool.zero == 0)
		str = width(str, res.c_bool.width - 1, 0, ' ');
	if (res.c_bool.neg == 1)
	{
		str[0] = c;
		res.k++;
	}
	res.length++;
	res = ft_strcat_f(str, res, 0);
	ft_strdel(&str);
	return (res);
}

static	t_print		distrib(const char *str, va_list ap, t_print res)
{
	res.save_i = res.k;
	if (str[res.k] == '\0')
	{
		res.k++;
		return (res);
	}
	res.length--;
	while (res.c_bool.check == 0 && str[res.k])
	{
		res = check_flag(str, res, 0);
		res.k++;
	}
	if (res.c_bool.check == -1)
		return (check_true(str[res.k - 1], res));
	if (res.c_bool.h > 0)
		res.c_bool.h = (res.c_bool.h % 2) + 1;
	if (res.c_bool.l > 0)
		res.c_bool.l = (res.c_bool.l % 2) + 1;
	if (res.c_bool.check != 0)
		res = if_forest(res.c_bool.c, ap, res);
	if (res.k == res.save_i)
		res.k++;
	return (res);
}

int					ft_printf(const char *str, ...)
{
	va_list		ap;
	t_print		res;

	if (!str || str[0] == '\0')
		return (0);
	res.k = 0;
	res = init_struct(res);
	va_start(ap, str);
	while (str[res.k])
	{
		if (str[res.k] == '%')
		{
			res.k++;
			res = init_bool(res);
			res = distrib(str, ap, res);
			res.k--;
		}
		else
			res = ft_strcat_f(0, res, str[res.k++]);
	}
	write(1, res.buf, res.length);
	va_end(ap);
	ft_bzero(res.buf, BUFF_SIZE);
	return (res.length + res.length_write);
}
