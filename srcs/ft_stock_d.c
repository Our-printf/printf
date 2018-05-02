/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 13:25:19 by sgarcia           #+#    #+#             */
/*   Updated: 2018/05/02 12:06:40 by sgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

intmax_t	ft_specs_int(t_print res, intmax_t va)
{
	intmax_t	rsl;

	rsl = 0;
	if (res.c_bool.h == 1)
		rsl = (signed char)va;
	if (res.c_bool.h == 2)
		rsl = (short int)va;
	if (res.c_bool.l == 1 && res.c_bool.h == 0)
		rsl = (long long int)va;
	if (res.c_bool.l == 2 && res.c_bool.h == 0)
		rsl = (long)va;
	if (res.c_bool.j == 1 && res.c_bool.h == 0)
		rsl = (intmax_t)va;
	if (res.c_bool.z == 1 && res.c_bool.h == 0)
		rsl = (size_t)va;
	if (res.c_bool.h >= 1 &&
			(res.c_bool.j == 1 || res.c_bool.z == 1 || res.c_bool.l >= 1))
		rsl = (uintmax_t)va;
	return (rsl);
}

void		sort_order_zeroi(char *str, t_print res, intmax_t va, int len)
{
	int		index;

	index = 0;
	if ((len < res.c_bool.width && res.c_bool.neg == 0 && res.c_bool.zero == 0)
				|| (res.c_bool.point >= 0 && res.c_bool.neg == 0))
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
	if (res.c_bool.pos == 1)
		str[index++] = '+';
	else if (res.c_bool.space == 1)
		str[index++] = ' ';
	if (len < res.c_bool.width && res.c_bool.zero == 1 && res.c_bool.neg == 0
			&& res.c_bool.point == -1)
		strcat_width(str, (res.c_bool.width - len), '0', &index);
	else if (res.c_bool.point >= 0)
		strcat_width(str, (res.c_bool.point - nbr_len2(va, 10)), '0', &index);
	if (res.c_bool.point != 0)
		str[index++] = '0';
	if (len < res.c_bool.width && res.c_bool.neg == 1)
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
}

void		sort_order_posi(char *str, t_print res, intmax_t va, int len)
{
	int		index;

	index = 0;
	if ((len < res.c_bool.width && res.c_bool.neg == 0 && res.c_bool.zero == 0)
	|| (res.c_bool.point >= 0 && res.c_bool.neg == 0))
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
	if (res.c_bool.pos == 1)
		str[index++] = '+';
	else if (res.c_bool.space == 1)
		str[index++] = ' ';
	if (len < res.c_bool.width && res.c_bool.zero == 1 && res.c_bool.neg == 0
			&& res.c_bool.point == -1)
		strcat_width(str, (res.c_bool.width - len), '0', &index);
	else if (res.c_bool.point >= 0)
		strcat_width(str, (res.c_bool.point - nbr_len2(va, 10)), '0', &index);
	itoa_base_static(va, 10, str, &index);
	if (len < res.c_bool.width && res.c_bool.neg == 1)
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
}

void		sort_order_negi(char *str, t_print res, intmax_t va, int len)
{
	int		index;

	index = 0;
	if (va == -9223372036854775807 - 1)
		res = sort_intmax(str, res, va, &index);
	va = -va;
	if ((len < res.c_bool.width && res.c_bool.neg == 0 && res.c_bool.zero == 0)
	|| (res.c_bool.point >= 0 && res.c_bool.zero == 1 && res.c_bool.neg == 0))
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
	str[index++] = '-';
	if (len < res.c_bool.width && res.c_bool.zero == 1 && res.c_bool.neg == 0
			&& res.c_bool.point == -1)
		strcat_width(str, (res.c_bool.width - len), '0', &index);
	else if (res.c_bool.point >= 0)
		strcat_width(str, (res.c_bool.point - nbr_len2(va, 10)), '0', &index);
	if (res.c_bool.check == 1)
		res = sort_intmax(str, res, va, &index);
	else
		itoa_base_static(va, 10, str, &index);
	if (len < res.c_bool.width && res.c_bool.neg == 1)
		strcat_width(str, (res.c_bool.width - len), ' ', &index);
}

t_print			ft_stock_d(va_list ap, t_print res, intmax_t rsl, long long va)
{
	char		*str;
	int			len;

	va = va_arg(ap, intmax_t);
	rsl = (int)va;
	res.c_bool.check = 0;
	str = ft_memalloc(32 + res.c_bool.width + res.c_bool.point);
	if (res.c_bool.specs == 1)
		rsl = ft_specs_int(res, va);
	len = nbr_len_int(rsl, res);
	ft_bzero(str, 32 + res.c_bool.width + res.c_bool.point);
	if (rsl < 0)
		sort_order_negi(str, res, rsl, len);
	if (rsl > 0)
		sort_order_posi(str, res, rsl, len);
	if (rsl == 0)
		sort_order_zeroi(str, res, rsl, len);
	res = strcat_buff(str, res);
	ft_strdel(&str);
	return (res);
}
