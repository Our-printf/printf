/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 15:45:01 by sgarcia           #+#    #+#             */
/*   Updated: 2018/03/27 19:13:08 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print		strcat_c(char *str, t_print res, char c)
{
	int		i;

	i = 0;
	while (i < res.c_bool.width)
	{
		res.buf[res.length] = str[i];
		i++;
		res.length++;
	}
	if (c != '\0')
		res.length++;
	return (res);
}

char	*width_c(char *copy, char c, int w)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < w)
		copy[i++] = c;
	return (copy);
}

t_print		stock_c(va_list ap, t_print res)
{
	char	c;
	char	*str;

	c = va_arg(ap, int);
	if (!c || c == 0)
		c = '\0';
	if (res.c_bool.width > 0)
	{
		str = ft_memalloc(res.c_bool.width);
		if (res.c_bool.zero == 1)
			str = width_c(str, '0', res.c_bool.width);
		if (res.c_bool.zero == 0)
			str = width_c(str, ' ', res.c_bool.width);
		if (res.c_bool.neg == 0)
			str[res.c_bool.width - 1] = c;
		if (res.c_bool.neg == 1)
			str[0] = c;
			res = strcat_c(str, res, c);
		ft_strdel(&str);
		if (c != '\0')
			res.length--;
	}
	else
		res = (ft_strcat_f(0, res, c));
	return (res);
}
