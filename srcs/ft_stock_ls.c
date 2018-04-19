/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 15:45:01 by sgarcia           #+#    #+#             */
/*   Updated: 2018/04/18 13:09:29 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char		*s_unicode_2_octets(int unicode, char *uni, int i)
{
	uni[i] = ((unicode & 1984) >> 6) + 192;
	uni[i + 1] = (unicode & 63) + 128;
	uni[i + 2] = '\0';
	return (uni);
}

char		*s_unicode_3_octets(int unicode, char *uni, int i)
{
	uni[i] = ((unicode & 61440) >> 12) + 224;
	uni[i + 1] = ((unicode & 4032) >> 6) + 128;
	uni[i + 2] = (unicode & 63) + 128;
	uni[i + 3] = '\0';
	return (uni);
}

char		*s_unicode_4_octets(int unicode, char *uni, int i)
{
	uni[i] = ((unicode & 1835008) >> 18) + 240;
	uni[i + 1] = ((unicode & 258048) >> 12) + 128;
	uni[i + 2] = ((unicode & 4032) >> 6) + 128;
	uni[i + 3] = (unicode & 63) + 128;
	uni[i + 4] = '\0';
	return (uni);
}

char		*mall_size_of_s_unicode(wchar_t *tmp)
{
	char	*str;
	int		i;

	i = 0;
	while (tmp[i])
	{
		if (tmp[i] < 128)
			i++;
		else if (tmp[i] < 2048)
			i += 2;
		else if (tmp[i] < 65536)
			i += 3;
		else if (tmp[i] < 2097152)
			i += 4;
	}
	str = ft_memalloc(i + 1);
	str[i] = '\0';
	return (str);
}

t_print		stock_ls(va_list ap, t_print res, int i)
{
	wchar_t	*tmp;
	char	*copy;

	tmp = va_arg(ap, wchar_t *);
	if (tmp == NULL)
		copy = "(null)";
	else
	{
		copy = mall_size_of_s_unicode(tmp);
		while (tmp[i])
		{
			if (tmp[i] > 127)
				copy = print_s_unicode(tmp[i], res, copy);
			else
				copy[ft_strlen(copy)] = tmp[i];
			i++;
		}
	}
	if (res.c_bool.point >= 0)
		copy = preci_ls(copy, res);
	res = width_ls(copy, res);
	if (tmp != NULL)
		ft_strdel(&copy);
	return (res);
}
