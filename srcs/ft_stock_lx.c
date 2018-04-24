/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_lx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 13:27:30 by sgarcia           #+#    #+#             */
/*   Updated: 2018/04/24 16:20:07 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

uintmax_t		ft_specs(t_print res, uintmax_t va)
{
	uintmax_t	rsl;

	rsl = 0;
	if (res.c_bool.h == 1)
		rsl = (unsigned char)va;
	else if (res.c_bool.h == 2)
		rsl = (unsigned short int)va;
	else if (res.c_bool.l == 1)
		rsl = (unsigned long long int)va;
	else if (res.c_bool.l == 2)
		rsl = (unsigned long)va;
	else if (res.c_bool.j == 1)
		rsl = (uintmax_t)va;
	else if (res.c_bool.z == 1)
		rsl = (size_t)va;
	else
		rsl = (unsigned int)va;
	return (rsl);
}

static	int		nbr_len(uintmax_t nbr, t_print res)
{
	int			i;
	int			j;
	uintmax_t	tmp;

	tmp = nbr;
	i = 0;
	j = 0;
	if ((res.c_bool.space == 1 || res.c_bool.pos == 1 || res.c_bool.sharp == 1)
			&& nbr != 0)
	{
		if (res.c_bool.sharp == 1)
			i++;
		i++;
	}
	while (nbr / 16 > 0)
	{
		nbr /= 16;
		j++;
	}
	if (!(tmp == 0 && res.c_bool.point == 0))
		j++;
	if (j < res.c_bool.point)
		return (res.c_bool.point + i);
	return (j + i);
}

static	void	sort_order_zero(char *str, t_print res, uintmax_t va, int len)
{
	int		index;

	index = 0;
	if ((len < res.c_bool.width && res.c_bool.neg == 0 && res.c_bool.zero == 0)
				|| (res.c_bool.point >= 0 && res.c_bool.neg == 0))
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
	if (res.c_bool.sharp == 1 && va != 0)
	{
		str[index++] = '0';
		str[index++] = 'X';
	}
	if (len < res.c_bool.width && res.c_bool.zero == 1 && res.c_bool.neg == 0
			&& res.c_bool.point == -1)
		strcat_width(str, (res.c_bool.width - len), '0', &index);
	else if (res.c_bool.point >= 0)
		strcat_width(str, (res.c_bool.point - nbr_len2(va, 16)), '0', &index);
	if (res.c_bool.point != 0)
		str[index++] = '0';
	if (len < res.c_bool.width && res.c_bool.neg == 1)
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
}

static	void	sort_order_pos(char *str, t_print res, uintmax_t va, int len)
{
	int		index;

	index = 0;
	if ((len < res.c_bool.width && res.c_bool.neg == 0 && res.c_bool.zero == 0)
	|| (res.c_bool.point >= 0 && res.c_bool.neg == 0))
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
	if (res.c_bool.sharp == 1 && va != 0)
	{
		str[index++] = '0';
		str[index++] = 'X';
	}
	if (len < res.c_bool.width && res.c_bool.zero == 1 && res.c_bool.neg == 0
			&& res.c_bool.point == -1)
		strcat_width(str, (res.c_bool.width - len), '0', &index);
	else if (res.c_bool.point >= 0)
		strcat_width(str, (res.c_bool.point - nbr_len2(va, 16)), '0', &index);
	itoa_base_maj(va, 16, str, &index);
	if (len < res.c_bool.width && res.c_bool.neg == 1)
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
}

t_print			ft_stock_lx(va_list ap, t_print res, uintmax_t rsl,
		unsigned long long va)
{
	char		*str;
	int			len;

	va = va_arg(ap, uintmax_t);
	rsl = (unsigned int)va;
	res.c_bool.check = 0;
	str = ft_memalloc(32 + res.c_bool.width + res.c_bool.point);
	if (res.c_bool.specs == 1)
		rsl = ft_specs(res, va);
	len = nbr_len(rsl, res);
	ft_bzero(str, 32 + res.c_bool.width + res.c_bool.point);
	if (rsl > 0)
		sort_order_pos(str, res, rsl, len);
	if (rsl == 0)
		sort_order_zero(str, res, rsl, len);
	res = strcat_buff(str, res);
	ft_strdel(&str);
	return (res);
}
