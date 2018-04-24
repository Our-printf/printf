/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 15:45:01 by sgarcia           #+#    #+#             */
/*   Updated: 2018/04/24 11:20:03 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print		strcat_c(char *str, t_print res, char c)
{
	int		i;

	i = 0;
	while (i < res.c_bool.width)
	{
		if (res.length == BUFF_SIZE - 1)
			res = ft_clean(res);
		res.buf[res.length] = str[i];
		i++;
		res.length++;
	}
	if (c != '\0')
		res.length++;
	return (res);
}

char		*width_c(char *copy, char c, int w)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < w)
		copy[i++] = c;
	return (copy);
}

t_print		function_c(char c, t_print res)
{
	char	*str;

	str = ft_memalloc(res.c_bool.width);
	if (res.c_bool.zero == 1 && res.c_bool.neg == 0)
		str = width_c(str, '0', res.c_bool.width);
	else
		str = width_c(str, ' ', res.c_bool.width);
	if (res.c_bool.neg == 0)
		str[res.c_bool.width - 1] = c;
	if (res.c_bool.neg == 1)
		str[0] = c;
	res = strcat_c(str, res, c);
	ft_strdel(&str);
	if (c != '\0')
		res.length--;
	return (res);
}

t_print		stock_c(va_list ap, t_print res)
{
	char	c;

	c = va_arg(ap, int);
	if (!c || c == 0)
		c = '\0';
	if (res.c_bool.width > 0)
		res = function_c(c, res);
	else
		res = (ft_strcat_f(0, res, c));
	return (res);
}
