/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_ls2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 13:27:09 by sgarcia           #+#    #+#             */
/*   Updated: 2018/04/24 16:10:59 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print		print_width(t_print res, int nb)
{
	char	*str;

	str = ft_memalloc(res.c_bool.width - nb);
	if (res.c_bool.zero == 1 && res.c_bool.neg == 0)
		str = width_s2(str, '0', res.c_bool.width - nb, 0);
	else
		str = width_s2(str, ' ', res.c_bool.width - nb, 0);
	res = ft_strcat_f(str, res, 0);
	ft_strdel(&str);
	return (res);
}

t_print		strcat_point_static(t_print res, char c, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if (res.length == BUFF_SIZE - 1)
			res = ft_clean(res);
		res.buf[res.length] = c;
		res.length++;
		i++;
	}
	return (res);
}

char		*preci_ls(char *copy, t_print res)
{
	int		j;

	j = 0;
	while (copy[j + res.c_bool.point])
	{
		copy[j + res.c_bool.point] = '\0';
		j++;
	}
	return (copy);
}

t_print		width_ls(char *tmp, t_print res)
{
	int		j;
	int		len;
	char	*copy;

	j = 0;
	copy = NULL;
	len = ft_strlen(tmp);
	if (res.c_bool.neg == 1)
		res = ft_strcat_f(tmp, res, 0);
	if (len < res.c_bool.width)
	{
		if (res.c_bool.neg == 1)
			res = strcat_point_static(res, ' ', res.c_bool.width - len);
		if (res.c_bool.neg == 0)
		{
			if (res.c_bool.zero == 1)
				res = strcat_point_static(res, '0', res.c_bool.width - len);
			else
				res = strcat_point_static(res, ' ', res.c_bool.width - len);
		}
	}
	if (res.c_bool.neg == 0)
		res = ft_strcat_f(tmp, res, 0);
	return (res);
}

char		*print_s_unicode(int n, t_print res, char *uni)
{
	int		i;

	i = 0;
	while (uni[i])
		i++;
	if (n < 2048)
	{
		if (i + 1 >= res.c_bool.point && res.c_bool.point >= 0)
			return (uni);
		uni = s_unicode_2_octets(n, uni, i);
	}
	else if (n < 65536)
	{
		if (i + 2 >= res.c_bool.point && res.c_bool.point >= 0)
			return (uni);
		uni = s_unicode_3_octets(n, uni, i);
	}
	else if (n < 2097152)
	{
		if (i + 3 >= res.c_bool.point && res.c_bool.point >= 0)
			return (uni);
		uni = s_unicode_4_octets(n, uni, i);
	}
	return (uni);
}
