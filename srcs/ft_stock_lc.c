/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 15:45:01 by sgarcia           #+#    #+#             */
/*   Updated: 2018/04/24 13:26:40 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print		unicode_2_octets(t_print res, int unicode)
{
	unsigned	char	*uni;

	uni = ft_memalloc(1);
	if (res.c_bool.width - 2 > 0 && res.c_bool.neg != 1)
		res = print_width(res, 2);
	uni[0] = ((unicode & 1984) >> 6) + 192;
	uni[1] = (unicode & 63) + 128;
	uni[2] = '\0';
	res = ft_strcat_f((char *)uni, res, 0);
	if (res.c_bool.width - 2 > 0 && res.c_bool.neg == 1)
		res = print_width(res, 2);
	return (res);
}

t_print		unicode_3_octets(t_print res, int unicode)
{
	unsigned	char	*uni;

	uni = ft_memalloc(1);
	if (res.c_bool.width - 3 > 0 && res.c_bool.neg != 1)
		res = print_width(res, 3);
	uni[0] = ((unicode & 61440) >> 12) + 224;
	uni[1] = ((unicode & 4032) >> 6) + 128;
	uni[2] = (unicode & 63) + 128;
	uni[3] = '\0';
	res = ft_strcat_f((char *)uni, res, 0);
	if (res.c_bool.width - 3 > 0 && res.c_bool.neg == 1)
		res = print_width(res, 3);
	return (res);
}

t_print		unicode_4_octets(t_print res, int unicode)
{
	unsigned	char	*uni;

	uni = ft_memalloc(1);
	if (res.c_bool.width - 4 > 0 && res.c_bool.neg != 1)
		res = print_width(res, 4);
	uni[0] = ((unicode & 1835008) >> 18) + 240;
	uni[1] = ((unicode & 258048) >> 12) + 128;
	uni[2] = ((unicode & 4032) >> 6) + 128;
	uni[3] = (unicode & 63) + 128;
	uni[4] = '\0';
	res = ft_strcat_f((char *)uni, res, 0);
	if (res.c_bool.width - 4 > 0 && res.c_bool.neg == 1)
		res = print_width(res, 4);
	return (res);
}

t_print		size_of_unicode(int n, t_print res)
{
	if (n < 2048)
		res = unicode_2_octets(res, n);
	else if (n < 65536)
		res = unicode_3_octets(res, n);
	else if (n < 2097152)
		res = unicode_4_octets(res, n);
	return (res);
}

t_print		stock_lc(va_list ap, t_print res)
{
	int					n;
	char				c;

	n = va_arg(ap, int);
	if (n < 127)
	{
		c = n;
		if (!c || c == 0)
			c = '\0';
		if (res.c_bool.width > 0)
			res = function_c(c, res);
		else
			res = (ft_strcat_f(0, res, c));
	}
	else
		res = size_of_unicode(n, res);
	return (res);
}
