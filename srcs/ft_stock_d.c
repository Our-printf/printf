/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:38:10 by rojaguen          #+#    #+#             */
/*   Updated: 2018/04/19 17:09:46 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char		*ft_widht(char *str, t_print res)
{
	int		i;
	char	*s;
	int		a;
	int		nb;

	a = 0;
	i = 0;
	nb = 0;
	if (res.c_bool.space == 0)
		nb++;
	if (res.c_bool.pos == 1 && !((int)ft_strlen(str) < res.c_bool.width + 2))
		nb++;
	if ((int)ft_strlen(str) > res.c_bool.width)
		return (str);
	s = ft_strnew(res.c_bool.width + 3);
	while (a < (res.c_bool.width - (int)ft_strlen(str)) + nb)
		s[a++] = ' ';
	a--;
	while (str[i])
		s[a++] = str[i++];
	s[a] = '\0';
	ft_strdel(&str);
	return (s);
}

char		*ft_point(char *str, t_print res)
{
	char	*s;
	int		i;
	int		a;

	i = 0;
	a = 0;
	if ((int)ft_strlen(str) >= res.c_bool.point)
		return (str);
	s = ft_strnew(ft_strlen(str) + res.c_bool.point);
	while (i + (int)ft_strlen(str) < res.c_bool.point)
		s[i++] = '0';
	while (i < res.c_bool.point + (int)ft_strlen(str))
		s[i++] = str[a++];
	s[i] = '\0';
	ft_strdel(&str);
	return (s);
}

char		*ft_negatif(char *str, t_print res)
{
	int		i;
	int		a;
	char	*s;
	int		len;
	int		space;

	a = 0;
	i = 0;
	space = 0;
	if (res.c_bool.space == 1 && res.c_bool.pos == 0)
		space = 1;
	if ((int)ft_strlen(str) > res.c_bool.width)
		return (str);
	s = ft_strnew(res.c_bool.width - ft_strlen(str) - space);
	len = ft_strlen(str);
	while (i < len)
		s[i++] = str[a++];
	while (i <= res.c_bool.width - 1 - space)
		s[i++] = ' ';
	s[i] = '\0';
	ft_strdel(&str);
	return (s);
}

t_print		ft_stock_d2(t_print res, int rsl, long long va)
{
	char *stock;

	stock = NULL;
	if (rsl == -2147483648)
	{
		stock = ft_strdup_l("2147483648");
		res.c_bool.pos = -1;
		res = ft_stock_dif(res, rsl, stock);
		return (res);
	}
	if (res.c_bool.specs == 1)
	{
		if (va < 0 && va > -9223372036854775807 - 1)
		{
			va = va * -1;
			res.c_bool.pos = -1;
		}
		stock = ft_itoa_cast(va);
		res = ft_stock_dif(res, va, stock);
	}
	if (rsl < 0 && res.c_bool.specs == 0 && rsl != 0 && rsl != -2147483648)
	{
		rsl = rsl * -1;
		res.c_bool.pos = -1;
	}
	if (stock)
	ft_strdel(&stock);
	return (res);
}

t_print		ft_stock_d(va_list ap, t_print res, int rsl, long long va)
{
	char		*stock;

	stock = NULL;
	va = va_arg(ap, long long);
	if (res.c_bool.specs == 1)
		va = ft_specs(res, va);
	else
		rsl = va;
	if (rsl == -2147483648)
		res = ft_stock_d2(res, rsl, va);
	if (rsl == 0 && res.c_bool.specs != 1 && rsl != -2147483648)
		res = ft_rsl_zero(res, rsl);
	if (rsl < 0 && res.c_bool.specs == 0 && rsl != 0 && rsl != -2147483648)
	{
		rsl = rsl * -1;
		res.c_bool.pos = -1;
	}
	if (res.c_bool.specs == 1 && rsl == 0 && rsl != -2147483648)
		res = ft_stock_d2(res, rsl, va);
	else if (rsl != 0 && rsl != -2147483648)
	{
		stock = ft_itoa(rsl);
		res = ft_stock_dif(res, rsl, stock);
	}
	while(1){}
	return (res);
}
