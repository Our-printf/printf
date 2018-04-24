/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 13:29:02 by sgarcia           #+#    #+#             */
/*   Updated: 2018/04/24 13:29:08 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char		*width_neg(char *copy, char c, int w)
{
	int		j;
	char	*str;

	j = 0;
	str = ft_memalloc(w + 1);
	while (copy[j])
	{
		str[j] = copy[j];
		j++;
	}
	while (j < w)
		str[j++] = c;
	str[j] = '\0';
	return (str);
}

char		*width_s2(char *copy, char c, int w, int len)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = ft_memalloc(w + 1);
	while (i < (w - len))
		str[i++] = c;
	while (copy[j] && i + j < w)
	{
		str[i + j] = copy[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char		*preci_s(char *tmp, t_print res)
{
	int		j;

	j = 0;
	while (tmp[j + res.c_bool.point])
	{
		tmp[j + res.c_bool.point] = '\0';
		j++;
	}
	return (tmp);
}

char		*width_s(char *tmp, t_print res)
{
	int		j;
	int		len;
	char	*copy;

	j = 0;
	len = ft_strlen(tmp);
	copy = ft_memalloc(res.c_bool.width);
	if (res.c_bool.width < len)
		return (tmp);
	if (res.c_bool.neg == 1)
		copy = width_neg(tmp, ' ', res.c_bool.width);
	if (res.c_bool.neg == 0)
	{
		if (res.c_bool.zero == 1)
			copy = width_s2(tmp, '0', res.c_bool.width, len);
		else
			copy = width_s2(tmp, ' ', res.c_bool.width, len);
	}
	copy[res.c_bool.width] = '\0';
	return (copy);
}

t_print		stock_s(va_list ap, t_print res)
{
	char	*tmp;
	char	*copy;

	tmp = va_arg(ap, char *);
	if (tmp == NULL)
		tmp = "(null)";
	if (res.c_bool.point == 0)
	{
		copy = width_s("\0", res);
		res = ft_strcat_f(copy, res, 0);
		return (res);
	}
	copy = ft_strdup(tmp);
	if (res.c_bool.point > 0 && res.c_bool.point < (int)ft_strlen(copy))
		copy = preci_s(copy, res);
	if (res.c_bool.width > 0)
		copy = width_s(copy, res);
	res = ft_strcat_f(copy, res, 0);
	ft_strdel(&copy);
	return (res);
}
